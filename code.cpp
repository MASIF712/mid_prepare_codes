#include<iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, n;
    for (int i = 1; i <= 10;i++)
    {
        cout << a<< " ";
        n = a + b;
        a = b;
        b = n;
    }
        return 0;
}