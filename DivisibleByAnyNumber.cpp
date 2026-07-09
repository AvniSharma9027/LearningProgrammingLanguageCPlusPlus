#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if (x % 5 == 0) {
        cout<<"Entered Number is divisble by 5.";
    }
    else {
        cout<<"Entered Number is not divisble by 5.";
    }
}