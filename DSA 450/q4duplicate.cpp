#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6]={2,4,3,5,2,1};
    int ans=0;
    for(int i=0;i<6;i++)
    {
        ans=ans^a[i];
    }
    for(int i=1;i<6;i++)
    {
        ans=ans^i;
    }
    cout<<ans<<endl;
}