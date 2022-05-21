#include <iostream>

using namespace std;

struct Item
{
    int value, weight;

    Item(int value, int weight)
        : value(value), weight(weight)
    {
    }
};

double fractionalKnapsack(struct Item arr[],
                          int N, int size)
{

    int curWeight = 0;

    double finalvalue = 0.0;

    for (int i = 0; i < size; i++)
    {

        if (curWeight + arr[i].weight <= N)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }

        else
        {
            int remain = N - curWeight;
            finalvalue += arr[i].value * ((double)remain / arr[i].weight);

            break;
        }
    }

    return finalvalue;
}

int main()
{
    int N = 60;

    Item arr[] = {{120, 10},
                  {270, 30},
                  {120, 20},
                  {120, 36}};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum profit = "
         << fractionalKnapsack(arr, N, size);
    return 0;
}