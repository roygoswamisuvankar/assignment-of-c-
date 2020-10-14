//calculate npr in c++
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
    int n,r,ans;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter R";
    cin>>r;
    ans = fact(n)/fact(n-r);
    cout<<ans;
}
