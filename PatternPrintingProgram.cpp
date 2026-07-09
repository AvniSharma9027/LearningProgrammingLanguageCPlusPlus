#include <iostream>
using namespace std;
int main() {
    int i, j, k, l, r;
    cout<<"Enter an odd number(no. of stars in 1st line): ";
    cin>>r; 
    for (i = 1; i <= (r+1)/2; i++) {
        if (i == 1) {
            for (j = 1; j <= r; j++){
                cout<<"* ";
            } 
        }  
        else {
            for (i = 1; i <= r/2; i++) {
                for (j = r/2; j >= i; j--){
                    cout<<"* ";
                }
                for (k = 1; k <= (2*i)-1; k++){
                    cout<<"  ";
                }
                for (l = r/2; l >= i; l--){
                    cout<<"* ";
                }
                cout<<endl;
            }
        }
    cout<<endl;
    }   
}



