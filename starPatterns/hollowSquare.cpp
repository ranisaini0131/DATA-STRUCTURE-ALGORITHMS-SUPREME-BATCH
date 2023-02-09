#include <iostream>
using namespace std;

int main()
{
    // hollow square
    int rowCount, colCount;
    cin >> rowCount;
    cin >> colCount;

    for (int row = 0; row < rowCount; row++)
    {
        if (row == 0 || row == rowCount - 1)
        {
            for (int col = 0; col < colCount; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int k = 0; k < colCount - 2; k++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}