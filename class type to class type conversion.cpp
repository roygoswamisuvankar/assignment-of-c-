#include<iostream>
using namespace std;
class retangle;
class square{
    private:
        int s;
    public:
        int peri;
        square(){
            cout<<".....source class square....."<<endl;
        }
        square(int side){
            this->s = side;
        }
        void perimeter(){
            peri = 4*s;
            cout<<"Perimeter of a square is: "<<peri<<endl;
        }
        int getside(){
            return(s);
        }
};
class retangle{
    private:
        int length, breath;
    public:
        int peri_re;
        retangle(){

        }
        retangle(int l, int b){
            this->length = l;
            this->breath = b;
        }
        void operator=(square sq){
            this->length = sq.getside();
            this->breath = sq.getside();
        }
        void pertimeter_re(){
            peri_re = 2*(length+breath);
            cout<<"\nPerimeter of a retangle is: "<<peri_re<<endl;
        }
};
int main(){
    int s;
    int l,b;
    cout<<"Enter side of square:: ";
    cin>>s;
    cout<<"Enter the length of retangle:: ";
    cin>>l;
    cout<<"Enter the breath of retangle:: ";
    cin>>b;

    square s1;          //source class object
    s1 = s;             //basic type to class type convertion
    cout<<"\n....Before convertion class type to class type...."<<endl;
    s1.perimeter();
    cout<<"\n.....Destination class ....."<<endl;
    retangle r1(l,b);        //destination class object
    r1.pertimeter_re();
    cout<<"\n....After convertion class type to class type...."<<endl;
    r1 = s1;
    r1.pertimeter_re();
}
