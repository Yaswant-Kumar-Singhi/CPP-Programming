/*
Write a program to calculate the value of nCr for a given range
*/

#include<bits/stdc++.h>
using namespace std;

class times
{
  int h,m,s;
  public:
    void setTimes(int x,int y,int z);
    void showTimes();
    times calSum(times t);
};

void times::setTimes(int x,int y,int z)
{
    h=x;m=y;s=z;
}

void times::showTimes()
{
    cout<<h<<m<<s;
}

times times::calSum(times t)
{
    times temp;
    temp.h=h+t.h;
    temp.m=m+t.m;
    temp.s=s+t.s;
    return temp;
}

int main()
{
    times t1,t2,t3;
    t1.setTimes(3,2,3);
    t2.setTimes(3,2,4);
    t3=t1.calSum(t2);
    t3.showTimes();
    return 1;
    
}

