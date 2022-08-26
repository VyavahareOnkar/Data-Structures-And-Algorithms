#include <bits/stdc++.h>
using namespace std;

// Class which defines the linkedlist 
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


// Function to obtain the length of the linkedlist

int lengthOfLinkedList(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        head = head->next;
        len++;
    }
    // cout << len << endl;
    // cout << len / 2 << endl;
    if (len % 2)
        return (len / 2);
    else
        return (len / 2) - 1;
}


//Function to print the nodes of the linkedlist

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}



//Function to reverse the linkedlist from which parameter it is passed.
void  reverseLinkedList(Node * &head)
{
    Node *prev = NULL;
    Node *forward = head;
    Node *curr = head;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    cout << "Reveresed Linked List is as follows:" << endl;
    head=prev;

    // return head;
}


//This function checks if the given linkedlist is palindrome or not without using stack and takes O(n) time.
bool checkPalindrome(Node *head)
{
    Node *temp = head;
    int i = 0;
    int len = lengthOfLinkedList(temp);
    while (i <= len)
    {
        temp = temp->next;
        i++;
    }

    reverseLinkedList(temp);
    while (temp != NULL)
    {
        if (head->data != temp->data)
        {
            return false;
        }
        head = head->next;
        temp = temp->next;
    }

    return true;
}


void middleOfLinkedList(Node* head)
{
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<slow->data<<endl;
}






// This approacch will take O(n) time complexity and O(n) space compelexity for using auxiliary stack.
bool isPalindrome(Node *head)
{
    stack<int> s;
    Node *slow = head;
    while (slow != NULL)
    {
        s.push(slow->data);
        slow = slow->next;
    }

    while (head != NULL)
    {
        int ans = s.top();
        s.pop();
        if (ans != head->data)
        {
            return false;
        }
        else
        {
            head = head->next;
        }
    }
    return true;
}

int main()
{

    Node *head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(12);
    head->next->next->next->next = new Node(2);
    head->next->next->next->next->next = new Node(1);
    // head->next->next->next->next->next->next = new Node(1);

    cout<<"middle of element is as follows:"<<endl;
    middleOfLinkedList(head);

    if (checkPalindrome(head))
    {
        cout << "Yes it is palindrome!" << endl;
    }
    else
    {
        cout << "No it is not palindrome!" << endl;
    }

    return 0;
}