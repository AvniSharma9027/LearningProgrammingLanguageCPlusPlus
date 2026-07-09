#include <iostream>
using namespace std;
int main() {
    int num, rem, sum = 0, orig;
    cout<<"Enter a number: ";
    cin>>num;
    orig = num;
    while (num > 0) {
        rem = num % 10;
        if (rem % 2 == 0) {
            sum = sum + rem;
        }
        num = num / 10;
    }
    cout<<"Sum of Even Digits of "<<orig<<" is: "<<sum;
    return 0;
}
