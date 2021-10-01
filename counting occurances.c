#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int n;
    int a;
    int count=0;

    cout<<"enter the number "<<endl;
    cin>>n;

    while(n>0){
       a=n%10;
       n=n/10;
       if(a==9){
        count=count+1;
       }
    }
    cout<<count;
    return 0;
}
