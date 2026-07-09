#include <iostream>
using namespace std;
int main() {
    int x, y, z;
    cout<<"Enter First Number: ";
    cin>>x;
    cout<<"Enter Second Number: ";
    cin>>y;
    cout<<"Enter Third Number: ";
    cin>>z;
    if (x > y) {
        if (x > z) {
            cout<<x<<" is greatest.";
        }
        else {
            cout<<z<<" is greatest.";
        }
    }
    else {
        if (y > z) {
            cout<<y<<" is greatest.";
        }
        else {
            cout<<z<<" is greatest.";
        }
    }
}