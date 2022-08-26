
// //given number n print n if n is fibonacci number else print sum of even fibonacci numbers till n.
// #include <bits/stdc++.h>

// using namespace std;

// class fib
// {
// public:
//     int fibonacci_answer(int num)
//     {
//         if(num==0 || num==1 || num==2)
//         return num;

//         int count = 0;
//         int a = 0,b = 1;
//         int c=-1;

//         while (c<=num)
//         {
//             c = a + b;
//             if(c==num)
//             return num;

//             if(c%2==0)
//             count += c;
//             a = b;
//             b = c;
//         }
        
        

//         return count;
//     }
// };

// int main()
// {
//     int number;
//     cin >> number;
//     fib ob;
//     cout << ob.fibonacci_answer(number) << endl;
//     return 0;
// }
 








 //------------------------------------------------------------------------------------------

//to check if n is fibonacci or not.we can say that there is a property of fibonacci numbers 
//is that given no is said to be fibonacci if and only if 5n2+4 or 5n2-4 are perfect squares


// #include<bits/stdc++.h>
// using namespace std;


// bool isPerfectSquare(int n){
//     int ans=sqrt(n);
//     return (ans*ans==n);
// }


// bool checkFibonacci(int n){
//     return isPerfectSquare(5*n*n+4) || isPerfectSquare(5*n*n-4);
// }


// int main(){

//     int n;
//     cin>>n;
//     cout<<checkFibonacci(n);
//     return 0;
// }




//------------------------------------------------------------------------------------------
//Recursive method to print  nth fibonacci numbers.

#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main(){


    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}