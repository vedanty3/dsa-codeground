// https://practice.geeksforgeeks.org/problems/reverse-a-sublist-of-a-linked-list/1

class Solution
{
public:
    Node *reverseBetween(Node *head, int m, int n)
    {
        if (!head or !head->next or m == n)
            return head;
        Node *dummy = new Node(0);
        dummy->next = head;
        Node *prev = dummy, *curr = head, *next_node;

        for (int i = 1; i <= m - 1; i++)
            prev = prev->next, curr = curr->next;

        while (m < n)
        {
            next_node = curr->next;
            curr->next = next_node->next;
            next_node->next = prev->next;
            prev->next = next_node;
            m++;
        }
        return dummy->next;
    }
};