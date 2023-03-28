#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6]={2,4,5,6,7,3};
    {
        int min=a[0];
        int max=a[0];
        for(int i=2;i<6;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
            else if(a[i]>max)
            {
                max=a[i];
            }
        }
        cout<<"min="<<min<<"max="<<max;

    }
}