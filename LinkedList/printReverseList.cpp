#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
 
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void reverseLinkedList(Node *head)
{
    Node *curr = head;
    Node *forward = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    // head = prev;
    cout << "after reversing:" << endl;
    printList(prev);
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(12);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(6);
    Node *tail = head->next->next->next->next;
    cout << "before reversing:" << endl;
    printList(head);
    cout << endl;
    reverseLinkedList(head);
    return 0;
}