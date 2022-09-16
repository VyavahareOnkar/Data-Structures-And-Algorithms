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
Node *mid(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    int cnt = 0;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            slow = slow->next;
        }
        slow = slow->next;
    }
    return slow;
}
void solve(Node *head)
{
    Node *ans = head;
    Node *temp = mid(head);
    while (temp != NULL)
    {
        ans->data = (head->data) * (temp->data);
        ans = ans->next;
        head = head->next;
        temp = temp->next;
    }
    ans->next = NULL;
    while(ans->next!=NULL)
    {
        cout<<ans->data<<"->";
        ans=ans->next;
    }
    cout<<endl;
}
// 1->2->3->4
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    Node *tail = new Node(4);
    head->next->next->next = tail;

    solve(head);

    return 0;
}