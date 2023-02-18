#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 1, 0, 0, 1, 0, 0, 0, 0, 0};
    int size = 10;
    int one = 0;
    int zero = 0;

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == 0)
        {
            zero = zero + 1;
        }
        if (arr[i] == 1)
        {
            one = one + 1;
        }
    }
    cout << "number of o's are: " << zero << endl;
    cout << "number of 1's are: " << one << endl;

    return 0;
}
