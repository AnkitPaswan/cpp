#include<iostream>
using namespace std;
int main(){
int item,i;
int arr[5]={5,20,15,30,25};
cout<<"Enter the item to search for in array:\n";
cin>>item;
for ( i = 0; i < 5; i++)
{
   if(arr[i]==item){
       cout<<"The item found at index "<<i;
       exit(1);
   }
}
  cout<<"Item not found";

return  0;
}