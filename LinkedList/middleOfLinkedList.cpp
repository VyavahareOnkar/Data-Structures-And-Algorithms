#include<bits/stdc++.h>
using namespace std;

//to declare the linkedList.
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};


int printLength(Node* temp){
    int cnt=0;
    while(temp!=NULL){

        temp=temp->next;
        cnt++;
    }
    return cnt;

}
void printLinkedList(Node* temp){
   
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
      
    }
   

}

int middleElement(Node* temp){
    Node* slow=temp;
    Node* fast = temp;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
    }
    return slow->data;
}


int main(){
    Node* head=new Node(32);
    head->next=new Node(3);
    head->next->next=new Node(1);
    head->next->next->next=new Node(15);
    head->next->next->next->next=new Node(21);
    head->next->next->next->next->next=new Node(26);
    // head->next->next->next->next->next->next=NULL;

    cout<<"length of LinkedList is:"<<printLength(head)<<endl;
    printLinkedList(head);
    cout<<endl;
    cout<<"Middle element is:"<<middleElement(head)<<endl;

    return 0;

}