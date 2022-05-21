#include<iostream>
using namespace std;
int main()
{
    int n,rem,rev=0,temp;
    cout<<"Enter the number:-\n";
    cin>>n;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp){
        cout<<"The number is palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}