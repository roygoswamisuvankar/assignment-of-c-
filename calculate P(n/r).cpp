#include<iostream>
using namespace std;
int fact(int num){
    int f = 1;
    for(int i = num; i>=1; i--){
        f = f * i;
    }
    return f;
}
int main(){
    int n,r;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter R: ";
    cin>>r;
    cout<<"The P(n/r) is: "<<fact(n)/(fact(r)*fact(n-r));
}
