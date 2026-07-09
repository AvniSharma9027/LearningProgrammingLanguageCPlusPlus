#include <iostream>
using namespace std;
int main() {
    int num, orig, rem, rev = 0, sum = 0;
    cout<<"Enter a Number: ";
    cin>>num;
    orig = num;
    while (num != 0) {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }
    cout<<"Sum of Digits of Entered Number is: "<<sum<<endl;
    while (orig != 0) {
        rem = orig % 10;
        rev = rev * 10 + rem;
        orig = orig /10;
    }
    cout<<"Reverse of Entered Number is "<<rev;
    return 0;
}
