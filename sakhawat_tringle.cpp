// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    /*
    4 3 2 1
     4 3 2
      4 3
       4
      4 3
     4 3 2
    4 3 2 1
    */

    for (int i = 1; i <= 7; i++)
    {
        if (i <= 4)
        {
            for (int k = 1; k <= i; k++)
            {
                cout << " ";
            }

            for (int j = 4; j >= i; j--)
            {
                cout << j << " ";
            }
        }
        else if (i < 8 && i > 4)
        {
            for (int k = 4; k > i - 4; k--)
            {
                cout << " ";
            }
            for (int j = 4; j >= 8 - i; j--)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}