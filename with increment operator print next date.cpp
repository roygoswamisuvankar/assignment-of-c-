#include<iostream>
using namespace std;
class date{
    private:
        int dd,mm,yy;
    public:
        void getdata(int d, int m, int y){
            dd = d;
            mm = m;
            yy = y;
        }
        date operator++(){
            date d;

            if(yy%4==0 && yy%100 !=0 || yy%400==0){
                /*if((dd>=1 && dd<=31)){
                    d.dd = ++dd;
                    d.mm = mm;
                    d.yy = yy;
                    return d;
                }
                else */if((dd==29) && (mm==2)){
                    d.dd = 1;
                    d.mm = ++mm;
                    d.yy = yy;
                    return d;
                }
                else if((dd==31) && (mm==12)){
                    d.dd = 1;
                    d.mm = 1;
                    d.yy = ++yy;
                    return d;
                }
                else if((dd == 31) &&(mm==1 || mm==3 || mm == 5 || mm==7 || mm==8 || mm==10)){
                    d.dd = 1;
                    d.mm = ++mm;
                    d.yy = yy;
                    return d;
                }
                else if((dd==30) &&(mm==4 || mm==6 || mm==9 || mm==11)){
                    d.dd = 1;
                    d.mm = ++mm;
                    d.yy = yy;
                    return d;
                }
                else if((dd>=1 && dd<=31)){
                    d.dd = ++dd;
                    d.mm = mm;
                    d.yy = yy;
                    return d;
                }
                return d;
            }else{
                /*if((dd>=1 && dd<=30)){
                    d.dd = ++dd;
                    d.mm = mm;
                    d.yy = yy;
                    return d;
                }*/
                /*else*/ if((dd==28) && (mm==2)){
                    d.dd = 1;
                    d.mm=++mm;
                    d.yy = yy;
                    return d;
                }
                else if((dd==29) && (mm==2)){
                    d.dd == 28;
                    d.mm = mm;
                    d.yy = yy;
                    return d;
                }
                else if((dd==31) && (mm==12)){
                    d.dd = 1;
                    d.mm = 1;
                    d.yy = ++yy;
                    return d;
                }
                else if((dd == 31) &&(mm==1 || mm==3 || mm == 5 || mm==7 || mm==8 || mm==10)){
                    d.dd = 1;
                    d.mm = ++mm;
                    d.yy = yy;
                    return d;
                }
                else if((dd==30) &&(mm==4 || mm==6 || mm==9 || mm==11)){
                    d.dd = 1;
                    d.mm = ++mm;
                    d.yy = yy;
                    return d;
                }
                else if((dd>=1 && dd<=30)){
                    d.dd = ++dd;
                    d.mm = mm;
                    d.yy = yy;
                    return d;
                }
            }
        }
        void show(){
            if((mm>=1 && mm<=12) &&(dd>=1 && dd<=30 || dd<=31)){
                cout<<dd<<" : "<<mm<<" : "<<yy<<endl;
            }else{
               cout<<"**Invald Date/Months you have entered(day must be 1 to 30 or 31 and months must be 1 to 12)**"<<endl;
            }
        }
};
int main(){
    int d,m,y;
    cout<<"Enter Day: ";
    cin>>d;
    cout<<"Enter Month: ";
    cin>>m;
    cout<<"Enter Year: ";
    cin>>y;
        date d1,d2;
        d1.getdata(d,m,y);
        cout<<"..........Current date................... "<<endl;
        d1.show();
        cout<<"............New date......................."<<endl;
        d2 = ++d1;
        d2.show();
}
