#include<iostream>
#include<stdlib.h>
using namespace std;
class students{
    int roll;
    string name;
    public:
        students(){
            cout<<"called constructor";
        }
        students(int r, string s){
            this->roll = r;
            this->name = s;
        }
        void display(){
            cout<<"Roll: "<<roll<<endl;
            cout<<"Name: "<<name<<endl;
        }
        void *operator new(size_t size){
            cout<<"New size decleared: "<<size<<endl;
            void *p = malloc(size);
            return p;
        }
        void operator delete(void *p){
            cout<<"Delete new size"<<endl;
            free(p);
        }
};
int main(){
    int r;
    string s;
    cout<<"Enter roll: ";
    cin>>r;
    cout<<"Enter name: ";
    cin>>s;
    students *p = new students(r,s);
    /*cout<<"Enter roll: ";
    cin>>r;
    cout<<"Enter name: ";
    cin>>s;
    students *t = new students(r,s);*/
    p->display();
    //t->display();
    delete p;
    //delete t;
}
