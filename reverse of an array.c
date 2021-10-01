#include<iostream>
#include<algorithm>
using namespace std;

static int s=0;
static int e=0;
int main(){
    int n=0;
    int a[100];
    int max=0;

    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    for (int i=0;i<n;i++)
    {
         cin>>a[i];
    }
    for(int i=0;i<n;i++)
        {
        swap(a[s],a[e]);
    }

    for(int i=0;i<n;i++){
        cout<<"reverse array is "<< a[i];
    }

    return 0;
}
