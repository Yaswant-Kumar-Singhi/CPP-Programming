/*
Write a program to calculate the value of nCr for a given range
*/

#include<bits/stdc++.h>
using namespace std;
int fact(int );

int ncr(int n, int r)
{
    return fact(n) / (fact(n-r) * fact(r));
}

int fact(int a)
{   int f=1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n=5,r=3;
    cout<<ncr(n,r);
    return 0;
}

