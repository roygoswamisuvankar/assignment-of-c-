#include<iostream>
#define max 100
using namespace std;
void swaping(int a[max], int n){
    int bigger, smaller,i,tmp,maxpos=0, minpos=0;
    bigger = a[0];
    smaller = a[0];
    for(i=0;i<n;i++){
        if(a[i]>bigger){
            bigger = a[i];
            maxpos = i;
        }
        if(a[i]<smaller){
            smaller = a[i];
            minpos = i;
        }
    }
    tmp = a[maxpos];
    a[maxpos]=a[minpos];
    a[minpos]=tmp;
    for(i=0;i<n;i++){
        cout<<a[i];
    }
}
int main(){
    int arr[max], i, n;
    cout<<"How many elements wish you intserted in array? ";
    cin>>n;
    cout<<"Enter array elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    swaping(arr,n);
}
