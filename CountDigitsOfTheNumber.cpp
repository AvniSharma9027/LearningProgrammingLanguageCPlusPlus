#include <iostream>
using namespace std;
int main() {
    int num, count = 0, orig;
    cout<<"Enter a number: ";
    cin>>num;
    orig = num;
    while (num > 0) {
        num = num / 10;
        count++;
    }
    cout<<orig<<" contains "<<count<<" digits." ;
    return 0;
}
