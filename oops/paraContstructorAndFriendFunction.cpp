#include <bits/stdc++.h>

using namespace std;

class X
{

    float x, y;

public:
    // Here we have used parameterised constructor to initialize
    // the values while creating an objects.
    X(float a, float b)
    {
        this->x = a;
        this->y = b;
    }

    // Here we have declared the friend function so that we can give access of
    // private data members of class X to the function calculateDistance to
    // calculate the distance between the two objects.
    friend float calculateDistance(X, X);
};

float calculateDistance(X o1, X o2)
{
    // Definition of friend function calculateDistance.
    float ans = ((o2.x - o1.x) * (o2.x - o1.x)) + ((o2.y - o1.y) * (o2.y - o1.y));
    return sqrt(ans);
}

int main()
{
    // Implicit call
    X p1(3, 4);

    // Explicit call
    X p2 = X(2, 54);

    // function call of friend function to calculate the distance
    // between to objects/points.
    cout << calculateDistance(p1, p2) << endl;

    return 0;
}