#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[100];
    int s=0;


    cout<<"enter the size of array"<<endl;
    cin>>n;
    int e=n-1;
    cout<<"enter the elements of array"<<endl;
    for (int i=0;i<n;i++)
    {
         cin>>a[i];
    }
    while(s<e)
    {
       int temp=a[s];
       a[s]=a[e];
       a[e]=temp;
        s++;
        e--;
    }
    cout<<"reversed array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
