#include <iostream> 
using namespace std;
int swap (int a, int b) {
    int c = a;
    a = b;
    b = c;
    cout<<"After Swapping: a = "<<a<<", b = "<<b<<endl;
}
int main() {
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before Swapping: a = "<<a<<", b = "<<b<<endl;
    swap(a,b);
}