#include <iostream>
using namespace std;

void mergeTwoArrays(int a[], int n, int b[], int m, int result[])
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }

    while (i < n)
        result[k++] = a[i++];
    while (j < m)
        result[k++] = b[j++];
}

void mergeKArrays(int arr[][100], int start, int end, int n, int output[])
{
    if (start == end)
    {

        for (int i = 0; i < n; i++)
            output[i] = arr[start][i];
        return;
    }

    int mid = (start + end) / 2;
    int left[1000], right[1000];

    mergeKArrays(arr, start, mid, n, left);
    mergeKArrays(arr, mid + 1, end, n, right);

    mergeTwoArrays(left, (mid - start + 1) * n, right, (end - mid) * n, output);
}

int main()
{
    int k = 3, n = 3;
    int arr[3][100] = {
        {1, 5, 9},
        {2, 6, 10},
        {3, 7, 11}};

    int output[1000];
    mergeKArrays(arr, 0, k - 1, n, output);

    cout << "Merged array: ";
    for (int i = 0; i < k * n; i++)
        cout << output[i] << " ";
    cout << endl;

    return 0;
}
