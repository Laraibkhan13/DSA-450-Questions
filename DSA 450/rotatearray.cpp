#include<bits/stdc++.h>
using namespace std;
void rotate(int a[],int n)
{
    int i=0,j=n-1;
    while(i!=j)
    {
        swap(a[i],a[j]);
        i++;
        for(int f=0;f<5;f++)
    {
        cout<<a[f];

    }
    cout<<endl;
    }
}

int main()
{
    int a[5]={1,2,3,4,5};

    rotate(a,5);

    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
}

