#include<bits/stdc++.h>
using namespace std;

class SI
{
    float p,r,t;
    public:
        void setData();
        void showData();
        void printSI();
};

void SI::setData()
{
    cout<<"Enter values for p,r and t"<<endl;
    cin>>p>>r>>t;
}
void SI::showData()
{
    cout<<endl;
    //cout<<"p: "<<p<<" "<<"r: "<<r<" "<<"t: "<<" "<<t<<endl;
    cout<<"P:"<<p<<" "<<"R: "<<r<<" "<<"T: "<<t<<endl;
}

void SI::printSI()
{
    float si;
    si=(p*r*t)/100;
    cout<<si;
}

int main()
{   SI s1;
    s1.setData();
    s1.showData();
    s1.printSI();
    return 0;
}

