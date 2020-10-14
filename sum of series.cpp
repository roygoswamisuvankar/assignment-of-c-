#include<iostream>
#include<math.h>
using namespace std;
int fact(int num){
    int f = 1;
    for(int i = num; i>=1; i--){
        f = f * i;
    }
    return f;
}
int sum_series(int r){
    double sum = 0, fa;
    for(int i=1; i<= r; i++){
        fa = pow(i,i)/fact(i);
        sum = sum + fa;
    }
    return sum;
}
int main(){
    int range;
    cout<<"Enter range: ";
    cin>>range;
    cout<<"Sum of this 1/1!+4/2!+27/3!+..........is :  "<<sum_series(range);
}
