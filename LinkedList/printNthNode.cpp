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

int lengthOfList(Node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}

int nthNode(Node* head,int n){
    int ans=-1;
    while(head!=NULL ){
        if(n==0){
           ans= head->data;
           break;
        }
        else{
            head=head->next;
            n--;
        }
    }
    return ans;
    
}
int nthNodeByEnd(Node* tail,int n){
    int ans=-1;
    while(tail!=head){
        if(n==0){
            ans=tail->data;
            break;
        }
    }
}


int main(){
     int n;
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(12);
    head->next->next->next=new Node(3);
    head->next->next->next->next=new Node(24);
    head->next->next->next->next->next=new Node(6);
    head->next->next->next->next->next->next=new Node(9);
    Node* tail = new Node(10);
    head->next->next->next->next->next->next->next=tail;
    cout<<lengthOfList(head)<<endl;
    cout<<"enter the number of node:"<<endl;
   
    cin>>n;
    cout<<nthNode(head,n)<<endl;
    cout<<nthNodeByEnd(tail,n)<<endl;
  
    return 0;
}