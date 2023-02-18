#include <iostream>
#include <limits.h> //header file
using namespace std;

int main()
{
    int arr[10] = {1, 3, 6, 30, 9, 5, 67, 33, 89, 100};
    int size = 10;
    int min_Num = INT_MAX;

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] < min_Num)
        {
            min_Num = arr[i];
        }
    }
    cout << "minimum number of array is: " << min_Num << endl;
}