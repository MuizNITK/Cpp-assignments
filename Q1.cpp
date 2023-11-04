#include <iostream>
using namespace std;
int oddsum(int a, int b){
    if(a > b) return 0;
    if(b % 2 == 0) return oddsum(a, b-1);
    return b + oddsum(a, b-1);
}
int main(){
    cout<<"enter the numbers "<<endl;
    int a,b;
    cin>>a>>b;
    cout<<" sum is "<<oddsum(a, b);
}