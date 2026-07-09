#include <iostream>
using namespace std;
int main() {
    int num, rem, pro = 1, orig;
    cout<<"Enter a number: ";
    cin>>num;
    orig = num;
    while (num > 0) {
        rem = num % 10;
        num = num / 10;
        pro = pro * rem;
    }
    cout<<"Product of Digits of "<<orig<<" is: "<<pro;
    return 0;
}
