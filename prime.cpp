#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number up to you want : ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n;i++)
    {
        count = 0;
        for (int j = 1; j <= i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            cout << i << " ";
        }
    }

        // for (int i = 2; i < n;i++)
        // {
        //     bool is_prime = true;
        //     for (int j = 2; j < i;j++)
        //     {
        //         if(i%j==0)
        //         {
        //             is_prime = false;
        //             break;
        //         }

        //     }
        //     if(is_prime)
        //     {
        //         cout << i << " ";
        //     }
        // }
        return 0;
}