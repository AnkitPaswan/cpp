#include<iostream>
using namespace std;
int main(){
int i,item;
int arr[5]={3,5,8,9,2};
cout<<"Enter the item to be searched:\n";
cin>>item;
for ( i = 0; i < 5; i++)
{
    if (arr[i]==item)
    {
     cout<<"Item found at position :"<<i+1; 
       exit(1); 
    } 
}
cout<<"Item not found";

return 0;
}