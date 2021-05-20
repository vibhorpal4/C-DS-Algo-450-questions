/** Initialize values of min and max as minimum and maximum of the first two elements respectively. 
 Starting from 3rd, compare each element with max and min, and change max and min accordingly
 (i.e., if the element is smaller than min then change min, else if the element is greater than
 max then change max, else ignore the element) 
 **/

#include <iostream>
using namespace std;

struct Pair
{
    int min, max;
};

struct Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    int i;

    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }

    if (arr[0] > arr[1])
    {
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }

    for (int i = 2; i < n; i++)
    {
        /* code */
        if (arr[1] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else
        {
            minmax.min = arr[i];
        }
    }

    return minmax;
}

int main()
{
    int arr[] = {100,56,89,74,53,22};
    int n = 6;

    struct Pair minmax = getMinMax(arr, n);

    cout << "Minimum element is: " << minmax.min << endl;
    cout << "Maximum element is: " << minmax.max << endl;

    return 0;
}