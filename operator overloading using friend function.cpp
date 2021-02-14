#include<iostream>
using namespace std;
class addition{
	public:
		int a[5];
		void getdata(){
			for(int i=0;i<5;i++){
				cin>>a[i];
			}
		}
		void showdata(){
			for(int i=0;i<5;i++){
				cout<<"\t"<<a[i]<<"\t";
			}
		}
		friend addition operator+(addition);
};
addition operator+(addition a1, addition a2){
	for(int i=0;i<5;i++){
		a1.a[i] = a1.a[i]+a2.a[i];
	}
	return a1;
}
int main(){
	addition a2,a3,a4;
	cout<<"\nEnter array 1: ";
	a2.getdata();
	cout<<"\nEnter array 2: ";
	a3.getdata();
	cout<<"\nThe array 1: ";
	a2.showdata();
	cout<<"\nThe array 2: ";
	a3.showdata();
	a4=a2+a3;
	cout<<"\nThe addition: ";
	a4.showdata();
}
