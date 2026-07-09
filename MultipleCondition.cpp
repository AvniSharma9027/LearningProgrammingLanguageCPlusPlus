#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a nuumber: ";
    cin>>num;
    if ( (num % 3 == 0) ||num % 5 == 0) {
        if (num % 3 == 0) {
            cout<<"It is divisible by 3."<<endl;
        }
        if (num % 5 == 0) {
            cout<<"It is divisible by 5.";
        }
    }
    else {
        cout<<"It is not divisible by 3 or 5 both.";
    }
}