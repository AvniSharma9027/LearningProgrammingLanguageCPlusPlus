#include <iostream>
using namespace std;
int main() {
    int i, n, a;
    cout<<"Enter n: ";
    cin>>n;
    for (i = n/2; i >= 1 ; i--) {
        if (n % i == 0) {
            a = i;
            break;
        }
    }
    cout<<"Highest Factor of "<<n<<" (other than itself) is "<<a;
}
// int main() {
//     int i, n, a;
//     cout<<"Enter n: ";
//     cin>>n;
//     for (i = 1; i <= n/2 ; i++) {
//         if (n % i == 0) {
//             a = i;
//         }
//     }
//     cout<<"Highest Factor of "<<n<<" (other than itself) is "<<a;
// }