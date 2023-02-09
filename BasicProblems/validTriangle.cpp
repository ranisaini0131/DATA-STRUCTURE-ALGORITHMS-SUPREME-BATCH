#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a + b > c)
    {
        if (a + c > b)
        {
            if (b + c > a)
            {
                cout << "Valid Triangle";
            }
        }
        else
        {
            cout << "Not a Valid Triangle";
        }
    }
    else
    {
        cout << "Not a Valid Triangle";
    }
}