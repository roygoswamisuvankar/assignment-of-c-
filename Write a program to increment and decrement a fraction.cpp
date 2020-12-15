#include<iostream>
using namespace std;
class fraction{
    private:
        int neu, deno;
    public:
        void getdata(int a, int b){
            neu = a;
            deno = b;
        }
        void showdata(){
            cout<<"The fraction number is: "<<neu<<"/"<<deno<<endl;
        }
        void show(){
            cout<<"After increment: "<<neu<<"/"<<deno<<endl;
        }
        fraction operator++(){
            fraction f;
            f.neu = ++neu;
            f.deno = ++deno;
            return f;
        }
        fraction operator--(){
            fraction r;
            r.neu = --neu;
            r.deno = --deno;
            return r;
        }
        void showde(){
            cout<<"After decrement: "<<neu<<"/"<<deno<<endl;
        }
};
int main(){
    int a,b;
    cout<<"Enter neuminator: ";
    cin>>a;
    cout<<"Enter denominator: ";
    cin>>b;
    fraction f1,f2,f3;
    f1.getdata(a,b);
    f1.showdata();
    f2 = ++f1;
    f2.show();
    f3 = --f1;
    f3.showde();
}
