#include <iostream>
using namespace std;
int main() {
    int num, i, sum = 0;
    cout<<"Enter a Number: ";
    cin>>num;
    for (i = 1; i <= num; i++) {
        sum = sum + i;
    }
    cout<<"Sum of Numbers from 1 to "<<num<<" is: "<<sum;
    return 0;
}