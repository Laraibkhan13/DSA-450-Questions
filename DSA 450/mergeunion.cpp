#include<bits/stdc++.h>
using namespace std;
int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int count=n+m;
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(a[i]==b[j])
            {
                count--;
                
            }
            i++;
            j++;
        }
        return count;
    }
int main()
{
    int a[5]={1,8,3,4,5};
    int b[2]={1,2};
    int ans=doUnion(a,5,b,2);
    cout<<ans;
    
    
}
