#include <iostream>
using namespace std;
int main() {
    float cp, sp, profit, loss;
    cout<<"Enter Cost Price: ";
    cin>>cp;
    cout<<"Enter Selling Price: ";
    cin>>sp;
    if (sp > cp) {
        profit = sp - cp;
        cout<<"Profit: "<<profit;
    }
    else if (sp < cp) {
        loss = cp - sp;
        cout<<"Loss: "<<loss;
    }
    else {
        cout<<"No Profit No Loss.";
    }
}