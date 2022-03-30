//IMSERTION SORT

#include <iostream>
using namespace std;

void insertionSort(int [], int);
void printArray(int [], int );

int main()
{
    int test, n, i, j;

    cout<<"enter number of test cases - ";
    cin>>test;

    for(i=1;i<=test;i++)
    {
        cout<<"enter no. of elememts in the array - ";
        cin>>n;
        
        int a[n];
        cout<<"enter "<<n<<" elements - ";
        for(j=1;j<=n;j++)
            cin>>a[j];

        insertionSort(a,n);  
    
        for (i = 0; i < n; i++)
            cout << a[i] << " ";
        printArray(a,n);  
        }

    return 0;
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return;
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return;
}