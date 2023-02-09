#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // first way
    for (int row = 0; row < n; row++)
    {
        for (int col = 5; col > row; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // second way
    for (int row = n; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}