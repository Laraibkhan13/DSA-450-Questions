#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6]={1,0,1,2,0,0};
    int l=0,h=5,m=0;
    while(m<=h)
    {
        if(a[m]==0)
        {
        swap(a[l],a[m]);
        l++;
        m++;
        }
        
        else if(a[m]==1)
        {
        m++;
        }

        else if(a[m]==2)
        {
        swap(a[h],a[m]);
        h--;
        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<a[i];
    }
}

