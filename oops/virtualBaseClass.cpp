#include <bits/stdc++.h>
using namespace std;


/*
    Here the Test class and Sports class are inherited from the Students.
    And then the Result class has undertaken the multiple inheritance from classes Tests and Sports
    By this we can face the ambiguity due to same data members can be inherited which causes confusion
    that's why we declare the classe Students as "Virtual Base class" so that same members 
    cannot inherit multiple times by which we can avoid ambiguity.

    Thus Students class is an Virtual Base Class.
    ---------------------------------------------

*/


class Students
{

protected:
    int rollNo;

public:
    void set_roll_no(int a)
    {
        rollNo = a;
    }

    void print_roll_no()
    {
        cout << "Your roll No is " << rollNo << endl;
    }
};



class Tests : virtual public Students
{

protected:
    float maths;
    float physics;

public:
    void set_marks(float val1, float val2)
    {
        maths = val1;
        physics = val2;
    }
    void print_marks()
    {
        cout << "Your Marks are:" << endl
             << "Maths:" << maths << endl
             << "Physics:" << physics << endl;
    }
};



class Sports : virtual public Students
{

protected:
    int score;

public:
    void set_score(int val)
    {
        score = val;
    }

    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};



class Result : public Tests, public Sports
{
private:
    int total;

public:
    void display_result()
    {
        print_roll_no();
        print_marks();
        print_score();
        total = maths + physics + score;
        cout << "Result : Total of this marks is " << total << endl;
    }
};

int main()
{

    Result onkar;
    onkar.set_roll_no(1);
    onkar.set_marks(99, 100);
    onkar.set_score(10);
    onkar.display_result();
    cout << "-----------------------" << endl;

    return 0;
}