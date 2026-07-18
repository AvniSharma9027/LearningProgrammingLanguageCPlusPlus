#include <iostream>
using namespace std;
int main() {
    int x = 3; 
    int* p = &x;
    cout << "Address of x: " << p << endl;
    cout << "value stored in x: " << *p << endl;
    cout << "Address of pointer p: " << &p << endl;
    *p = 5;
    cout << "value stored in x after change: " << *p << endl;
}