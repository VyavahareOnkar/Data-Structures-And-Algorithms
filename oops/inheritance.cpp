#include <bits/stdc++.h>
using namespace std;



//visibility mode -> public=====>> members inherited as public
//visibility mode -> private=====>> members inherited as private


//Private data members of parent class /base class cannot be inherited at any condition.


// Parent Class
class Employee
{

    int salary;

public:
    int id;
    Employee(int myId)
    {
        this->id = myId;
    }
    Employee(){}

    void printValues()
    {
        cout << "the Id of Employee is " << id << endl;
    }
};

// Developer class have inherited from parent class Employee with 'public' visibility mode
// Thus all data members inherited in Developer class are treated as public.
// If we change the visibility mode to private then all the public data members becomes private in derived/child class Developer.
// Thus we will not be able to access them in main method. 


//child class / derived class.

class Developer : public Employee
{
    string skillset;

public:
    void setData(int myId, string s)
    {
        id = myId;
        skillset = s;
    }
    Developer(int myId){
        id=myId;
    }
   
};

int main()
{

    // Employee Onkar(1), Ramacharan(2);
    // Onkar.printValues();

    Developer Ganesh(34);
    // Ganesh.setData(4,"Full Stack Developer");
    Ganesh.printValues();
    // Ramacharan.printValues();

    return 0;
}