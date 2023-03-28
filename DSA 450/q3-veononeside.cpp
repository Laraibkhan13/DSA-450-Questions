#include<bits/stdc++.h>
using namespace std;

void oneside(int a[],int n)
{
    int i=0,j=0;
    while(i<n&&j<n)
    {
        if(a[i]<0)
        {
            swap(a[i],a[j]);
            i++;j++;
            
        }
        i++;
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
    int a[8]={9,8,-1,10,-3,4,-2,7};
    oneside(a,8);
    print(a,8);
}