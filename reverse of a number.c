#include <iostream>
#include<algorithm>

using namespace std;

int main(){

    int n=0;
    int a=0;
    int b=0;

    cout<<"enter the number "<<endl;
    cin>>n;

    while(n>0){
       a=n%10;
       n=n/10;
       b=10*b+a;
       a=0;
       }

    cout<<b;
    return 0;
}

