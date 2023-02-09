#include <iostream>
using namespace std;

int main()
{
    int fact = 1, n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }

    cout << fact;
}
