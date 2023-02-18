#include <iostream>
#include <limits.h> //header file
using namespace std;

int main()
{
    int arr[10] = {1, 3, 6, 30, 9, 5, 67, 33, 89, 100};
    int size = 10;
    int max_Num = INT_MIN;

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] > max_Num)
        {
            max_Num = arr[i];
        }
    }
    cout << "Maximum number of array is: " << max_Num << endl;
    return 0;
}