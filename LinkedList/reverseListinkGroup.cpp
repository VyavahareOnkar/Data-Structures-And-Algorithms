#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};

int main(){

    Node* head=new Node(12);
    cout<<head->next<<endl;
    cout<<head->data<<endl;

    return 0;
}