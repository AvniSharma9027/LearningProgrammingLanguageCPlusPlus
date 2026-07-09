#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout<<"Value of x: ";
    cin>>x;
    cout<<"Value of y: ";
    cin>>y;
    if ( (x == 0) && (y != 0) ) {
        cout<<"Point is on Y-axis.";
    }
    else if ( (x != 0) && (y == 0) ) {
        cout<<"Point is on X-axis.";
    }
    else if ( (x > 0) && (y > 0) ) {
        cout<<"Point lies in 1st Quadrant.";
    }
    else if ( (x < 0) && (y > 0) ) {
        cout<<"Point lies in 2nd Quadrant.";
    }
    else if ( (x < 0) && (y < 0) ) {
        cout<<"Point lies in 3rd Quadrant.";
    }
    else if ( (x > 0) && (y < 0) ) {
        cout<<"Point lies in 4th Quadrant.";
    }
    else {
        cout<<"Point is at origin.";
    }
}