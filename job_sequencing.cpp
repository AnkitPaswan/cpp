
#include <algorithm>
#include <iostream>
using namespace std;

struct Job
{
    char id;
    int deadline;
    int profit;
};

bool comparison(Job a, Job b)
{
    return (a.profit > b.profit);
}

void printJobScheduling(Job arr[], int n)
{
    sort(arr, arr + n, comparison);

    int result[n];
    bool slot[n];

    for (int i = 0; i < n; i++)
        slot[i] = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, arr[i].deadline) - 1; j >= 0; j--)
        {
            // Free slot found
            if (slot[j] == false)
            {
                result[j] = i;  // Add this job to result
                slot[j] = true; // Make this slot occupied
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        if (slot[i])
            cout << arr[result[i]].id << " ";
}

// Driver code
int main()
{
    Job arr[] = {{'a', 2, 10},
                 {'b', 1, 25},
                 {'c', 2, 50},
                 {'d', 1, 40},
                 {'e', 3, 5}};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs "<<endl;

    printJobScheduling(arr, n);
    return 0;
    
}
