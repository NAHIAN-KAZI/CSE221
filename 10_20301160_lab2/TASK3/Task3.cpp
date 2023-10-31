#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr_one[], int arr_two[], int n)
{
    for(int i = 0; i < n - 1; i ++)
    {
        int temp_one = arr_one[i + 1];
        int temp_two = arr_two[i + 1];
        int j;
        for(j = i; j >= 0; j --)
        {
            if(arr_two[j] >= temp_two)
            {
                arr_two[j + 1] = arr_two[j];
                arr_one[j + 1] = arr_one[j];
            }
            else
            {
                break;
            }
        }
        arr_one[j + 1] = temp_one;
        arr_two[j + 1] = temp_two;
    }
}

int main()
{
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    int n;
    cin >> n;
    int arr_one[n], arr_two[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> arr_one[i];
    }
    for(int i = 0; i < n; i ++)
    {
        cin >> arr_two[i];
    }
    insertionsort(arr_one, arr_two, n);
    for(int i = n - 1; i >= 0; i --)
    {
        cout << arr_one[i] << " ";
    }
    return 0;
}
