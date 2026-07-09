#include <iostream>
using namespace std;
int main() {
    float per;
    cout<<"Enter Percentage: ";
    cin>>per;
    if ( (100 >= per) && (81 <= per) ) {
        cout<<"Very Good.";
    }
    else if ( (80 >= per) && (61 <= per) ) {
        cout<<"Good.";
    }
    else if ( (60 >= per) && (41 <= per) ) {
        cout<<"Average.";
    }
    else {
        cout<<"Fail";
    }
}
