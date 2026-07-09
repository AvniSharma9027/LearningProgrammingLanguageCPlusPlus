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
    int n, r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    int nfact = factorial(n);
    int rfact = factorial(r);           
    int nrfact = factorial(n - r);
    cout<<"Permutation: "<<nfact/nrfact<<endl;
    cout<<"Combination: "<<nfact/(rfact*nrfact)<<endl;
    return 0;
}
