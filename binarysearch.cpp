#include<iostream>
using namespace std;
int main(){
int item,i;
int arr[5]={10,20,30,40,50};
cout<<"Enter item to be searched in array:\n";
cin>>item;
for(i=0;i<5;i++){
    if(arr[i]==item){
        cout<<"iteam found at position: "<<i+1;
        exit(1);
    }
    else{
        item=i+1; 
    }
}
cout<<"item not found";
return 0;
}