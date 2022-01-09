#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node()
    {
        next = NULL;
    }
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *merge(Node *head1, Node *head2)
{

    Node *sorted = NULL;

    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    if (head1->data <= head2->data)
    {

        sorted = head1;
        sorted->next = merge(head1->next, head2);
    }
    else
    {
        sorted = head2;
        sorted->next = merge(head1, head2->next);
    }

    return sorted;
}

int main()
{

    return 0;
}