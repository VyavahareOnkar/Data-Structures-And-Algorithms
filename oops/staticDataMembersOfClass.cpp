#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    static int cnt;

public:
    void setData(int ipID)
    {
        this->id = ipID;
        cnt++;
    }
    void getData()
    {
        cout << "The id of employee " << cnt << " is " << id << endl;
    }
};
int Employee ::cnt;

int main()
{

    Employee onkar, ramesh, ganesh;
    onkar.setData(100);
    onkar.getData();

    ramesh.setData(101);
    ramesh.getData();

    ganesh.setData(102);
    ganesh.getData();

    return 0;
}
