#include <bits/stdc++.h>
using namespace std;

class SimpleCalculator
{
protected:
    float value1;
    float value2;
    char c;

public:
    SimpleCalculator(int val1, int val2, char ch)
    {
        this->value1 = val1;
        this->value2 = val2;
        this->c = ch;
    }
};

class Calculate : SimpleCalculator
{

public:
    void calculate_operations()
    {
        if (c == '+')
        {
            cout << value1 + value2;
            return;
        }
        else if (c == '-')
        {
            cout << value1 - value2;
            return;
        }
        else if (c == '*')
        {
            cout << value1 * value2;
        }
        else if (c == '/')
        {
            cout << value1 / value2;
        }
        else
        {
            cout << "invalid operator" << endl;
        }
    }
};

int main()
{
    SimpleCalculator calci(2, 54, '/');

    Calculate calci.calculate_operations();
    return 0;
}