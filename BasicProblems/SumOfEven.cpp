#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i <= n; i+=2)
    {
        sum += i;
    }
    cout << sum;
}
