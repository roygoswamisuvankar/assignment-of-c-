#include<iostream>
using namespace std;
int simple(int p, int r, int t){
    int ans;
    ans = (p*r*t)/100 + p;
    return ans;
}
int main(){
    int p,t,age,r;
    cout<<"Enter amount of fixed deposite: ";
    cin>>p;
    cout<<"Enter time in year: ";
    cin>>t;
    cout<<"Enter Depositor's age: ";
    cin>>age;
    if(age>=18 && age<=60){
        r = 10;
        cout<<"You have return of your FD is: "<<simple(p,r,t);
    }else if(age>60){
        r = 12;
        cout<<"You have return of your FD is: "<<simple(p,r,t);
    }else{
        cout<<"Minor age: ";
    }
}
