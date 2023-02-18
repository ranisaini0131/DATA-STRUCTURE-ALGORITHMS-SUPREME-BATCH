#include <iostream>
using namespace std;

int sumOfEven(int num)
{
    int sum = 0;
    for (int i = 2; i <= num; i = i + 2)
    {
        sum = sum + i;
        cout << sum;
        return sum;
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int even = sumOfEven(n);
    cout << even;
    return 0;
}