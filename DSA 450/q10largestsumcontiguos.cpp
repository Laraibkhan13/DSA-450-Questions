#include <bits/stdc++.h>
using namespace std;
int sub(int arr[], int n){
        
        // Your code heren
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
        }
        cout<<sum<<endl;
        int largest=sum;
        
        
        int count=0,j;
        for(int i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                for(int k=i;k<n;k++)
                {
                count=count+arr[i];
                // cout<<count<<endl;
                }
                n--;
                
              if(count>sum)
            {
                largest=count;
            }
            count=0; 
                
            }
            
           

            
        }
        return largest;
    }

int main()

{
       int a[5]={-1,-2,-3,-4};
        int ans=sub(a,4);
        cout<<ans;
        
}

