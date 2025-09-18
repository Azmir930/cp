#include <bits/stdc++.h>
using namespace std;
void Max_heapify(int arr[], int i)
{
    int l = 2 * i;
    int r = 2 * i + 1;
    int largest;
    if (l <= arr[0] && arr[l] > arr[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }
    if (r <= arr[0] && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        Max_heapify(arr, largest);
    }
}
void buildheap(int arr[])
{
    int n = arr[0];
    for (int i = n / 2; i >= 1; i--)
    {
        Max_heapify(arr, i);
    }
}
void heapSort(int arr[])
{
    int n = arr[0];
    while (arr[0] != 0)
    {
        cout << arr[1];
        arr[1] = arr[arr[0]];
        arr[0]--;
        Max_heapify(arr, 1);
    }
}
int main()
{
    int arr[12] = {11, 6, 14, 20, 8, 7, 9, 3, 2, 4, 1, 5};
    buildheap(arr);
    for (int i = 1; i <= arr[0]; i++)
    {
        cout << arr[i] << " ";
    }
}