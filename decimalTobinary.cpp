#include<iostream>
using namespace std;
int main(){
int a[10],n,i;
cout<<"Enter the number to convert binary:\n";
cin>>n;
for ( i = 0; n>0; i++)
{
    a[i]=n%2;
    n=n/2;
}
cout<<"Given number of binary is:\n";
for(i=i-1;i>=0;i--){
    cout<<a[i];
}

return 0;
}