#include <bits/stdc++.h>
using namespace std;

int partition_index(vector<int> &arr, int low, int high)
{
    int pivot = arr[low], left = low, right = high;

    while (left < right)
    {
        while (arr[left] <= pivot && left <= high - 1)
        {
            left++;
        }
        while (arr[right] > pivot && right >= low + 1)
        {
            right--;
        }

        if (left < right)
        {
            swap(arr[left], arr[right]);
        }
    }
    swap(arr[low], arr[right]);
    return right;
}
void quicksort_ascending(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partition = partition_index(arr, low, high);
        quicksort_ascending(arr, low, partition - 1);
        quicksort_ascending(arr, partition + 1, high);
    }
}

// Descending order
int partition_index2(vector<int> &arr, int low, int high){
    int pivot = arr[low], left = low, right = high;

    while (left < right)
    {
        while (arr[left] >= pivot && left <= high - 1)
        {
            left++;
        }
        while (arr[right] < pivot && right >= low + 1)
        {
            right--;
        }

        if (left < right)
        {
            swap(arr[right], arr[left]);
        }
    }
    swap(arr[right], arr[low]);
    return right;
}
void quicksort_descending(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partition = partition_index2(arr, low, high);
        quicksort_descending(arr, low, partition - 1);
        quicksort_descending(arr, partition + 1, high);
    }
}

// Insertion sort recursive
void insertion_sort(vector<int> &arr, int low, int high){
    if (low == high) return;

    int j = low;
    while (j > 0 && arr[j-1] > arr[j])
    {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }
    insertion_sort(arr, low+1, high);
}
int main()
{
    vector<int> a = {4, 6, 2, 5, 7, 9, 1, 3};

    quicksort_ascending(a, 0, a.size() - 1);
    for (auto i : a)
    {
        cout << i << " ";
    }

    cout << endl;
    quicksort_descending(a, 0, a.size() - 1);
    for (auto i : a)
    {
        cout << i << " ";
    }

    cout << endl;
    a = {13, 46, 24, 52, 20, 9};
    insertion_sort(a, 0, a.size());
    for (auto i : a)
    {
        cout << i << " ";
    }
}