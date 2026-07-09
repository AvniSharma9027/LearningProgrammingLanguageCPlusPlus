#include <iostream>
using namespace std;
int main() {
    int a, b;
    char op;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    cout<<"Enter an operator('+','-','*','/'): ";
    cin>>op;
    if (op == '+') cout<<a+b;
    else if (op == '-') cout<<a-b;
    else if (op == '*') cout<<a*b;
    else if (op == '/') {
        if (b != 0) cout<<a/b; 
        else cout<<"Can't divided by 0.";
    }
    else cout<<"Invalid Operator.";
}