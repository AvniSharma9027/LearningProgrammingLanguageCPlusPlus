#include <iostream>
using namespace std;
int main() {
    int num, orig, rev = 0, rem;
    cout<<"Enter a Number: ";
    cin>>num;
    orig = num;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num /10;
    }
    cout<<"Reverse of "<<orig<<" is "<<rev;
}