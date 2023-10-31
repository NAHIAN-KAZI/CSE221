/*In worst case scenario, the time complexity of Bubble sort is  theta(n ^ 2).But in the best case the complexity is theta(n).
If we give the array already sorted then we get the best case scenario. There is no need implement any new task. The array just get through
the for loop and finds out that no swaping is neede. Count variable counts the swap.If the count remains 0 then we can tell that the array is already sorted and it is not need to traverse the whole array.
Thats why I checked the numbers of swaps and if it remains 0 then it will break and the complexity will be theta(n). */
#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
#include<vector>
using namespace std;

void BubbleSort(int arr[], int n)
{
    int count=0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
                count=1;
            }
        }
        if (count == 0)
        {
            break;
        }
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
