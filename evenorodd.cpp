#include <iostream>
using namespace std;
int main()
{
    int num, i;
    int a[num];
    cout << "Size of array is:";
    cin >> num;
    cout << "Enter the element\n";
    for (i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    cout << "The reverse array is:-\n";
    for (i = num - 1; i >= 0; i--)
    {
        cout << a[i] << endl;
    }
    cout<<"Printing the element ....\n";
    for (i = 0; i < num; i++)
    {
        if (num % 2 == 0)
        {
            cout << a[i] + 1<<endl;
        }
        else
        {
            cout << a[i] - 1<<endl;
        }
    }
    return 0;
}