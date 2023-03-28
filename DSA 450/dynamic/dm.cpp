#include<iostream>
using namespace std;

int variable(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];

    }
    return sum;

}

int main()
{
    
    int n=5;
    int arr[5]={1,2,3,4,5};
    
    int ans=variable(arr,n);
    cout<<ans;
}