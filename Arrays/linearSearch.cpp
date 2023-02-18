#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 44, 6, 8, 10};
    int size = 6;
    bool flag = 0;

    int key = 84;

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "present";
    }
    else
    {
        cout << "absent";
    }
    return 0;
}
