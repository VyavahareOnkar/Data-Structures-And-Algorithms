#include<iostream>
#include<stack>

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
        if(top==-1){
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
        cout<<"stack is empty not any element present as a peek"<<endl;
       return -1;
       
    }

    void isEmpty(){

        if(top==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
            cout<<"stack is not empty"<<endl;
            
    }


};

int main(){


    Stack s(6);

    s.push(2);
    s.push(12);
    s.push(5);
    s.push(78);

    cout<<s.peek()<<endl;
    
    s.pop();
    s.pop();
    // s.pop();
    // s.pop();
    cout<<s.top<<"->"<<s.peek()<<endl;
    cout<<s.size<<endl; 
    cout<<s.peek()<<endl;
    

    s.isEmpty();

    return 0;
}