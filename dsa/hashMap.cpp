#include <iostream>
using namespace std;

class MapNode
{
private:
    string key;
    int value;
    MapNode *next;
    friend class Map;

    MapNode(string key, int value)
    {
        this->key = key;
        this->value = value;
        next = NULL;
    }
    ~MapNode()
    {
        delete next;
    }
};

class Map
{
private:
    MapNode **buckets;
    int cnt;
    int numBuckets;
    int getBucketIndex(string key)
    {
        int hashCode = 0;
        int base = 1;
        int p = 37;

        for (int i = key.size() - 1; i >= 0; i--)
        {
            hashCode += key[i] * base;
            base = base * p;
            hashCode %= numBuckets;
            base %= numBuckets;
        }
        return hashCode % numBuckets;
    }

    void rehash()
    {
        MapNode **temp = buckets;
        buckets = new MapNode *[2 * numBuckets];
        for (int i = 0; i < (2 * numBuckets); i++)
        {
            buckets[i] = NULL;
        }
        int oldBucketSize = numBuckets;
        numBuckets *= 2;
        cnt = 0;

        for (int i = 0; i < oldBucketSize; i++)
        {
            MapNode *head = temp[i];
            while (head != NULL)
            {
                string key = head->key;
                int value = head->value;
                insert(key, value);
                head = head->next;
            }
        }

        for (int i = 0; i < oldBucketSize; i++)
        {
            delete temp[i];
        }
        delete[] temp;
    }

public:
    Map()
    {
        cnt = 0;
        numBuckets = 5;
        buckets = new MapNode *[numBuckets];
        for (int i = 0; i < numBuckets; i++)
        {
            buckets[i] = NULL;
        }
    }

    ~Map()
    {
        for (int i = 0; i < numBuckets; i++)
        {
            delete buckets[i];
        }
        delete[] buckets;
    }

    int size()
    {
        return cnt;
    }

    int getValue(string key)
    {
        int bucketIndex = getBucketIndex(key);
        MapNode *head = buckets[bucketIndex];

        while (head != NULL)
        {
            if (head->key == key)
            {
                return head->value;
            }
            head = head->next;
        }
        return 0;
    }

    void insert(string key, int value)
    {
        int bucketIndex = getBucketIndex(key);
        MapNode *head = buckets[bucketIndex];

        while (head != NULL)
        {
            if (head->key == key)
            {
                head->value = value;
                return;
            }
            head = head->next;
        }

        MapNode *n = new MapNode(key, value);
        n->next = buckets[bucketIndex];
        buckets[bucketIndex] = n;
        cnt++;
        double loadFactor = (1.0 * cnt) / numBuckets;
        if (loadFactor > 0.7)
        {
            rehash();
        }
    }

    int remove(string key)
    {
        int bucketIndex = getBucketIndex(key);
        MapNode *head = buckets[bucketIndex];
        MapNode *prev = NULL;
        while (head != NULL)
        {
            if (head->key == key)
            {
                if (prev == NULL)
                {
                    buckets[bucketIndex] = head->next;
                }
                else
                {
                    prev->next = head->next;
                }
                int value = head->value;
                head->next = NULL;
                delete head;
                cnt--;
                return value;
            }
            prev = head;
            head = head->next;
        }
        return 0;
    }

    double getLoadFactor()
    {
        return (1.0 * cnt) / numBuckets;
    }
};

int main()
{
    Map m;
    for (int i = 0; i < 10; i++)
    {
        char ch = '0' + i;
        string key = "abc";
        key += ch;
        int value = i + 1;
        m.insert(key, value);
        cout << "Load Factor : " << m.getLoadFactor() << endl;
    }
    cout << "Size : " << m.size() << endl;
    m.remove("abc4");
    for (int i = 0; i < 10; i++)
    {
        char ch = '0' + i;
        string key = "abc";
        key = key + ch;
        cout << key << " " << m.getValue(key) << endl;
        ;
    }
    cout << "Size : " << m.size() << endl;

    return 0;
}