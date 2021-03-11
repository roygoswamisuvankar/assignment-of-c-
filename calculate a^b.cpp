#include<iostream>
using namespace std;
int getdata(int a, int b){
	int ans = 1;
	if(b == 0){
		return 1;
	}else{
		for(int i=1; i<=b; i++){
		ans = ans * a;
    	}
    	return ans;
	}
}
int main(){
	int a, b;
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B: ";
	cin>>b;
	cout<<getdata(a,b);
}
