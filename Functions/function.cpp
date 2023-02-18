#include <iostream>
using namespace std;

//=============Print any number
// void printName(int a)
// {
// cout << a << endl; // this is the copy of a stored at different memory location, this iscalled pass by value
//  }

// Add two numbers

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    // int a = 5;
    // cout << "Address of a is:" << &a << endl;
    // printName(a); // this is the real a stored at some memory location suppose 100
    int a = 2, b = 5;
    int sum = add(a, b);

    cout << sum << endl;
    return 0;
}