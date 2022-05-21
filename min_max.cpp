#include<iostream>
using namespace std;
int a[100];
void maxmin(int j,int i, int &, int &);
int main(){
    int i,j,max,min,size;
    cout<<"Enter the number of elements : ";
    cin>>size;
    cout<<"Enter the elements : ";
    for ( i=1; i<=size; i++)
    {
        cin>>a[i];
    }
    i=1;
    j=size;
    maxmin(i,j,max,min);
    cout<<"max value is : "<<max;
    cout<<"\nmin value is : "<<min;
}
void maxmin(int i, int j, int &max, int &min)
{
    int mid,max1,min1;
    if(i==j)
    max=min=a[i];
    else if(i==(j-1))
    {
        if(a[i]<a[j])
        {
            max=a[j];
            min=a[i];
        }
        else
        {
            max=a[i];
            min=a[j];
        }
    }
    else
    {
        mid=(i+j)/2;
        maxmin(i,mid,max,min);
        maxmin(mid+1,j,max1,min1);
        if(max<max1)
        max=max1;
        if(min>min1)
        min=min1;
    }
}