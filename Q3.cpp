#include <iostream>
using namespace std;
bool poweroftwo(int n) {
    if(n==1) {
    return true;
    }
    if(n%2==0) {
    return poweroftwo(n/2);  // will divide until it becomes 1
    }
    return false;
}

int main() {
    int n;
    cout<<"Enter the integer ";
    cin>>n;
    if(poweroftwo(n)) {
    cout << "Yes" << endl;
    } else {
    cout << "No" << endl;
    }
}