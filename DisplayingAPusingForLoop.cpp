#include <iostream>
using namespace std;
int main() {
    int i, n;
    cout<<"Enter n: ";
    cin>>n;
    int a = 4;
    for (i = 1; i <=n; i++) {
        cout<<a<<" ";
        a = a + 3;
    }
}

// OR

// int main() {
//     int i, n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for (i = 4; i <= (3*n)+1; i+=3) {
//         cout<<i<<endl;
//     }
// }
