#include<iostream>
using namespace std;
int volume(int l, int b, int h){
    return (l*b*h);
}
int main(){
    int l,b,h;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breath: ";
    cin>>b;
    cout<<"Enter height: ";
    cin>>h;
    cout<<"The volume of cubic droid is: "<<volume(l,b,h);
}
