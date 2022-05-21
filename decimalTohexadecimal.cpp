#include<iostream>
using namespace std;
int main(){
int arr[10];
int n,i;
cout<<"Enter the number to convert hexadecimal:\n";
cin>>n;
for(i=0;n>0;i++){
    arr[i]=n%16;
    n/=16;
}
cout<<"Given number of hexadecimal value is:\n";
for (int j = i-1; j >=0; j--)
{
   if(arr[j]==10){
       cout<<"A";
   }
   else if(arr[j]==11){
       cout<<"B";
   }
   else if(arr[j]==12){
       cout<<"C";
   }
   else if(arr[j]==13){
       cout<<"D";
   }
   else if(arr[j]==14){
       cout<<"E";
   }
   else if(arr[j]==14){
       cout<<"F";
   }
   else{
       for (i = i - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
   }
   
}

return 0;
}