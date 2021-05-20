/**Initialize the start and end indexes as start=0 and end=n-1
 In a loop, swap arr[start] with arr[end] and change start and end as follows:
 start=start+1 and end=end-1.
 **/

#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        /* code */
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        // start = start + 1;
        end--;
        // end = end - 1;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
        cout << endl;
    }
}

main()
{
    int arr[] = {4, 5, 8, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The original array is: ";
    printArray(arr, n);

    reverseArray(arr, 0, n - 1);

    cout << "The reversed array is: ";
    printArray(arr, n);

    return 0;
}