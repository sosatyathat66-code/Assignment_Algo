#include <iostream>
using namespace std;

int main() {
    int x = 25;
    int* ptr = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    // Change the value through the pointer
    *ptr = 99;

    cout << "After changing *ptr to 99:" << endl;
    cout << "Value of x: " << x << endl;

    return 0;
}
