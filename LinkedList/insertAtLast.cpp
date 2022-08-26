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

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtLast(Node *head, int val)
{
    Node *temp1 = new Node(val);
    Node *temp2 = head;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;

    printLinkedList(head);
}

void insertAtFront(Node *head, int val)
{
    Node *temp1 = new Node(val);
    temp1->next = head;
    head = temp1;
    printLinkedList(head);
}
int main()
{

    Node *head = new Node(1);
    head->next = new Node(5);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);

    int input;
    cin >> input;
    insertAtLast(head, input);
    insertAtFront(head, input);
    // to check where is my head.
    cout << head->data << endl;

    return 0;
}