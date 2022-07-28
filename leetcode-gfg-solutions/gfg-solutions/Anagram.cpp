// https : // practice.geeksforgeeks.org/problems/anagram-1587115620/1

class Solution
{
public:
    // Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;
    }
};