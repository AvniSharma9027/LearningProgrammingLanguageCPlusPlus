#include <iostream>
using namespace std;
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {
    int l;
    cout<<"Enter the number of lines: ";
    cin>>l;
    for (int i = 0; i <= l; i++) {
        for (int j = 0; j <= i; j++) {
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
