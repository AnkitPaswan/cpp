#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the no. of row:-\n";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {   
        //     if(j<row-i)
        //    {
        //         cout<<"  ";
        //    }
        //    else{
        //        cout<<" * ";
        //    }
           cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}