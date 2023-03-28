#include<bits/stdc++.h>
using namespace std;

void merges(int a[],int n1,int b[],int n2,int c[])
{
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    while(i<n1)
    {
        c[k++]=a[i++];
    }
    while(j<n2)
    {
        c[k++]=b[j++];
    }
    
}


void print(int ans[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
}


int main()
{
    int a[4]={1,2,3,4};
    int b[6]={5,6,7,8,9,10};
    int c[10]={0};
    merges(a,4,b,6,c);
    print(c,10);
}
