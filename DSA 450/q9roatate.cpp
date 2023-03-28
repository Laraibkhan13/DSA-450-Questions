#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]={1,2,3,4,7};
    int x=a[4];

    for(int i=4;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=x;
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
}