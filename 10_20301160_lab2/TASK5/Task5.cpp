#include<iostream>
using namespace std;
void printarray(int array[],int size)
{

    int i;
    for(i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout << endl;
}
void swap(int*a1,int* a2)
{

    int temp = *a1;
    *a1=*a2;
    *a2 = temp;
}
int Partition(int array[],int lower,int upper)
{
    int pivot = array[upper];
    int start = lower;
    int i = lower-1;
    for(int j = lower;j<=upper-1;j++)
    {
        if(array[j]<pivot)
        {
            i++;
            swap(&array[i],&array[j]);
        }
    }

    swap(&array[i+1], &array[upper]);
    return i+1;
}
void quickSort(int array[], int lower, int upper)
{
    if (lower < upper)
    {
        int loc = Partition(array, lower, upper);
        quickSort(array, lower, loc - 1);
        quickSort(array, loc + 1, upper);
    }
}
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printarray(arr, n);
    return 0;
}
