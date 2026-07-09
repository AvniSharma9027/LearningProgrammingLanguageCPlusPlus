#include <iostream>
using namespace std;
int main() {
    int num, rem, sum = 0, orig;
    cout<<"Enter a number: ";
    cin>>num;
    orig = num;
    while (num > 0) {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }
    cout<<"Sum of Digits of "<<orig<<" is: "<<sum;
    return 0;
}
