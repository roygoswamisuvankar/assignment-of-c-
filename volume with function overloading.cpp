#include<iostream>
using namespace std;
class cubic{
    private:
    int length, breath, height;
    public:
    int volume(int l){
        int vol;
        length = l;
        vol = length*length*length;
        return vol;
    }
    int volume(int l, int h){
        double vol, r;
        length = l;
        height = h;
        r = length/2;
        vol = 3.12*r*r*height;
        return vol;
    }
    int volume(int l, int b, int h){
        double vol;
        length = l;
        breath = b;
        height = h;
        vol = length*breath*height;
    }
};
int main(){
    int l,b,h;
    cubic c1,c2,c3;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breath: ";
    cin>>b;
    cout<<"Enter height: ";
    cin>>h;
    cout<<"Volume of cube is: "<<c1.volume(l)<<endl;
    cout<<"Volume of cylinder is: "<<c2.volume(l,h)<<endl;
    cout<<"Volume of cuboid is: "<<c3.volume(l,b,h)<<endl;
}
