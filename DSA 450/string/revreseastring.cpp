#include<iostream>
using namespace std;

void reverse(char name[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(name[i++],name[j--]);
        
    }
    
}

int getLength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout<<"Enter your name";
    cin>>name;
    int len=getLength(name);
    cout<<"length of name"<<len<<endl;
    reverse(name,len);
    cout<<"your name is"<<name;
    

}

