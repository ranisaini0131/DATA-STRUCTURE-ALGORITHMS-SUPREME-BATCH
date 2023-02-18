#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // create Vector
    vector<int> arr;

    cout << arr.size() << endl;     // no. of element
    cout << arr.capacity() << endl; // how much can store

    arr.push_back(5);
    arr.push_back(7);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.pop_back();

    for (int k = 0; k < arr.size(); k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    //============another vector

    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<int> brr(n, {});
    cout << "Size of array" << brr.size() << endl;
    cout << "capacity of array" << brr.capacity() << endl;

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    //=========================

    vector<int> crr{10, 20, 30, 50};

    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;
}