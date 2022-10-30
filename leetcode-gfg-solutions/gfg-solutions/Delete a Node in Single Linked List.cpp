// https : // practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1

/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node *
deleteNode(Node *head, int x)
{
    if (x == 1)
        return head->next;
    Node *curr = head;
    Node *prev = NULL;
    while (x != 1)
    {
        prev = curr;
        curr = curr->next;
        --x;
    }

    prev->next = curr->next;
    return head;
}