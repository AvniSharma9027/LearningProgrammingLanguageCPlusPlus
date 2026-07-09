#include  <iostream>
using namespace std;
int main() {
    int i, n, flag=0;
    cout<<"Enter a number: ";
    cin>>n;
    for (i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        cout<<"1 is neither prime nor composite.";
    }
    else if (flag == 1) {
        cout<<n<<" is a composite number.";
    }
    else {          
        cout<<n<<" is a prime number.";
    }
}     