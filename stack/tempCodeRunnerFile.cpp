#include<iostream>
#include<stack>
// #include<bits/stdc++.h>

using namespace std;


class Stack {

    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }


    void push(int n){
        if(size-top>1){
          
             arr[++top]=n;
        
        }
        else{
              cout<<"stack is overflow"<<endl;
        }
       
    }

    void pop(){
        if(top<0){
            cout<<"stack is underflow"<<endl;
        }
        else{
             --top;
        }
       
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        cout<<"stack is empty"<<endl;
       return -1;
       
    }

    bool isEmpty(){

        if(top==-1){
            return true;
        }
        
            return false;

    }


};

int main(){


    Stack s(6);

    s.push(2);
    s.push(12);
    s.push(5);
    s.push(78);

    cout<<s.peek()<<endl;
    // cout<<s.top()<<endl;
    s.pop();
    // cout<<s.top()<<endl;
    cout<<s.peek()<<endl;

    cout<<s.isEmpty()<<endl;

    return 0;
}