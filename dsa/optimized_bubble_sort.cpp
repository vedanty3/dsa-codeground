/* 
Time Complexity of Bubble Sort is "O(n^2)".
If the array is already sorted still the Time Complexity is "O(n^2)".
So we need to optimize the bubble sort.
After optimizing, the time complexity will be "O(n)".
Space Complexity = O(1).
*/

#include <iostream>
using namespace std;
void bubbleSort(int array[], int n);
int main()
{
    int n;
    cout << "Lets perform Bubble Sort." << endl;
    cout << "Enter the size of array : ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at " << i << "th index : ";
        cin >> array[i];
    }

    cout << "Your array is : ";

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    bubbleSort(array, n);

    cout << endl
         << "Your array after performing Bubble Sort is : ";

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

void bubbleSort(int array[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j <= n - 2; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0) /* array is already sorted */
        {
            break;
        }
    }
}