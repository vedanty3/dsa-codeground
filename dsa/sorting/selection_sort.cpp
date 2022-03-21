#include <iostream>  /* array is getting sorted like this, (sorted)-------->(unsorted) */
using namespace std; /* Time Complexity of Selection Sort is O(n^2).*/

void selectionSort(int array[], int n);
int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << "th element : ";
        cin >> array[i];
    }

    cout << "Your array is : ";

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    selectionSort(array, n);
    cout << "Array after performing Selection Sort : ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}

void selectionSort(int array[], int n)
{

    for (int i = 0; i <= n - 2; i++) /// This will work because here we're dealing with indexes (i.e smallest=i).
    {
        int smallest = i;
        for (int j = i + 1; j <= n - 1; j++)
        {

            if (array[j] < array[smallest])
            {
                smallest = j;
            }
        }
        swap(array[i], array[smallest]);
    }
}

/*  for(int i=0;i<=n-2;i++){     /// This will not work because here will were dealing with values using indexes (i.e smallest=array[i]).

       int smallest = INT_MAX;
       for(int j = i+1;j<=n-1;j++){
         if(a[j]<smallest){
             smallest = a[j];
         }
       }

       if(a[i] > smallest){
         swap(a[i] , smallest);
       }
       }
    */
