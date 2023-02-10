#include <iostream>
using namespace std;

int main()
{

    //===============NATURAL NUMBER
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }

    // //=================REVERSE NATURAL NUMBER
    int k;
    cin >> k;
    for (int i = k; i >= 0; i--)
    {
        cout << i << endl;
    }

    // //==================In Range
    int start, end;
    cin >> start;
    cin >> end;
    for (int i = start; i <= end; i++)
    {
        cout << i << endl;
    }
}
