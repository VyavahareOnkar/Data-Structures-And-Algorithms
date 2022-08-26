#include <bits/stdc++.h>
using namespace std;



class Example
{

    string name;
    char gender;
    int salary;

public:

    // constructors can only be created in public access modifier.
    // here we have also observed the constructor overloading property
    // by creating different constructors with different parameteres

    //Below constructor is a Default Parameterized constructor.

    Example(string s, char c = 'M')
    {
        this->name = s;
        this->gender = c;
    }



    // Declaration of another constructor inside the class
    //  which causes overloading of constructor which is defined outside the class.



    Example(string, int);



    void printData()
    {
        cout << "The name and gender is " << name << " and " << gender << endl;
    }



    // Declaration of member function inside the class.


    void printVal();
};

// We can also write the constructor outside the class by using scope
// resolution operator as follows.
// You just need to declare it or tell about this constructor to the 
//class by declaring inside the class.







Example ::Example(string str, int val)
{
    this->name = str;
    this->salary = val;
}




// Invoking/calling the printVal function outside of class.





void Example ::printVal()
{
    cout << "the Name and salary of employee is " << name << " and " << salary << endl;
}





int main()
{

    Example first("onkar");
    first.printData();
    Example second("ganesh", 'F');
    second.printData();
    Example third("swarup", 1024);
    third.printVal();

    return 0;
}