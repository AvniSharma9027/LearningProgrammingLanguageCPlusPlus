#include <iostream>
using namespace std;
int sum (int a, int b){
    return a+b;
}
int main(){
    int a, b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;
    cout<<sum(a,b);
}
