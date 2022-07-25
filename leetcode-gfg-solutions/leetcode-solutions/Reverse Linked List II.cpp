// https : // leetcode.com/problems/reverse-linked-list-ii/

/*
 *
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (!head or !head->next or left == right)
            return head;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *prev = dummy, *curr = head, *next_node;

        for (int i = 1; i <= left - 1; i++)
            prev = prev->next, curr = curr->next;

        while (left < right)
        {
            next_node = curr->next;
            curr->next = next_node->next;
            next_node->next = prev->next;
            prev->next = next_node;
            left++;
        }
        return dummy->next;
    }
};