#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Before Swapping: x="<<x<<", y="<<y<<endl; 
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<"After Swapping: x="<<x<<", y="<<y<<endl; 
}