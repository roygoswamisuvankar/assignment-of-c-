#include<iostream>
using namespace std;
class bill{
	private:
		string code;
		int qty,price;
	public:
		int total, gtotal;
		void getdata(string c, int p, int q){
			code = c;
			price = p;
			qty = q;
			total = price*qty;
			gtotal = gtotal + total;
		}
		void showdata(){
			cout<<"\nThe item code: "<<code;
			cout<<"\nThe item price Rs."<<price<<"/- per item";
			cout<<"\nThe item quantity: "<<qty;
			cout<<"\n<---------------------Total price:-------------------------->"<<endl;
			cout<<"\nRs."<<total<<"/-"<<endl;
		}
		void showgtotal(){
			cout<<"<.....................Total Amount to be paid.........................>"<<endl;
			cout<<"Rs."<<gtotal<<"/-"<<endl;
			cout<<"\n.........Thank you.........."<<endl;
		}
};
int main(){
	int i,n,price,qty;
	string code;
	bill b1;
	cout<<"<<*************************Shop Billing system***************************>>"<<endl;
	cout<<"\nHow many items you have purchesed: ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nEnter item code: ";
		cin>>code;
		cout<<"\nEnter item price: ";
		cin>>price;
		cout<<"\nEnter item quantity: ";
		cin>>qty;
		b1.getdata(code, price, qty);
		b1.showdata();
	}
	b1.showgtotal();
}
