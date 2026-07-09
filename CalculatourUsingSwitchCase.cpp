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
    switch (op) {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            if (b != 0) cout<<a/b; 
            else cout<<"Can't divided by 0.";
            break;
        default:
            cout<<"Invalid Operator.";
    }
}