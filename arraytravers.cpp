#include <iostream>
using namespace std;
int main()
{
    int i, num;
    int a[num];
    cout << "Enter the Size of array :-";
    cin >> num;
    cout << "Enter the array elements:-\n";
    for (i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    cout << "The array is:-\n";
    for (i = 0; i < num; i++)
    {
        cout << a[i] << endl;
    }
    return 0;   
}