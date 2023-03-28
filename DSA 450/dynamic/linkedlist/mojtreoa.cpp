#include<iostream>
using namespace std;

int main()
{
    int arr[13] = {1,4,3,2,6,7,6,3,8,7,6,9,3} ;
    int count=0;

    int i=0;

    while(i<11)
    {

       
        if(arr[i]>=12)
        {
            break;
        }
         i=i+arr[i];
        count=count+1;
    }
    cout<<count;


    return 0;
}

