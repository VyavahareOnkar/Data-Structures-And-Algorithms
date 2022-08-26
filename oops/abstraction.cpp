#include <bits/stdc++.h>
using namespace std;
class Base
{
    int arr[5];
};
class Child1: public Base
{
};
class Child2: public Base
{
};
class GrandChild: public Child1, public Child2
{
};
int main(void)
{
    cout << sizeof(GrandChild);
    return 0;
}
// using namespace std;

// /*
//     Abstraction class is a class which has atleast one virtual function.


// */

// class Instrument
// {

// public:
//     virtual void makeSound(){
//         cout<<"Instrument playing"<<endl;
//     }
// };

// class Piano : public Instrument{

//     public:
//     void makeSound(){
//         cout<<"Piano playing "<<endl;
//     }
// };



// int main()
// {
//     Instrument* obj=new Piano;
//     obj->makeSound();
//     return 0;
// }