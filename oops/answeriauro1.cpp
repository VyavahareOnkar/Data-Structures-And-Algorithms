//Algorithm 1

#include <stdio.h>
void func2(int num)
{

    if (num == 0)
        return;

    printf("%d ", num);
    func2(num - 1);
}
void func1(int n)
{
    int index = n;
    if (n == 0)
        return;
    func2(index);
    printf("\n");
    func1(n - 1);
}

int main()
{
    int n = 4;
    func1(n);
    return 0;
}






//Algorithm 2

#include<stdio.h>


int rightmostOccurence(char source[], char substring[])
{

    int n = source.size();
    int m = substring.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int k = 0;
        for (int j = i; j < n; j++)
        {
            if (source[j] == substring[k])
            {
                k++;
            }
            else
            {
                break;
            }
        }
        if (k == m)
        {
            printf("%d\n", i);
        }
    }
}



