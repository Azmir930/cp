#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void quickSort3Way(int arr[], int l, int r)
{
    if (l >= r)
        return;

    int pivot = arr[r];
    int lt = l;
    int gt = r;
    int i = l;

    while (i <= gt)
    {
        if (arr[i] < pivot)
        {
            swap(arr[i], arr[lt]);
            i++;
            lt++;
        }
        else if (arr[i] > pivot)
        {
            swap(arr[i], arr[gt]);
            gt--;
        }
        else
        {
            i++;
        }
    }

    quickSort3Way(arr, l, lt - 1);
    quickSort3Way(arr, gt + 1, r);
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort3Way(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
