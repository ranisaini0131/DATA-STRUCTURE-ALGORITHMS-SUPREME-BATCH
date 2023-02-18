#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans xor arr[i];
    }
    return ans;
}

int main
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the number" << endl;
    // taking input
    for (int i - 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr);

    cout << "Unique element is: " << uniqueElement << endl;
}