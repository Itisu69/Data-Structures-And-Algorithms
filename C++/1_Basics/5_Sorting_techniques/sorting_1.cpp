#include <bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n){

   for (int i = 0; i <= n-2; i++)
   {
        int mini = i;
        for (int j = i; j <= n-1; j++)
        {
            if (a[j] < a[mini]){
                mini = j;
            }
        }
        int temp = a[i];
        a[i] = a[mini];
        a[mini] = temp;
   }
}

void bubble_sort(int a[], int n){
    if(n==1) return;
    for (int i = 0; i <= n-2; i++)
    {
        if(a[i] > a[i+1]){
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    bubble_sort(a,n-1);
}

void insertion_sort(int a[], int n){
    for (int i = 0; i <= n-1; i++)
    {
        int j = i;
        while (j > 0 && a[j-1] > a[j])
        {
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;

            j--;
        }   
    }
}


void merge(vector<int>& a, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while (left <= mid && right <= high)
    {
        if (a[left] <= a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(a[left++]);
    }
    while (right <= high){
        temp.push_back(a[right++]);
    }
    
    for (int i = low; i <= high; i++)
    {
        a[i] = temp[i - low];
    }    
}
void mS(vector<int>& a, int low, int high){
    if (low == high) return;
    int mid = (low+high) / 2;
    mS(a, low, mid);
    mS(a, mid+1, high);
    merge(a, low, mid, high);
}
void merge_sort(vector<int>& a, int n){
    mS(a, 0, n-1);
}

int main(){
    vector<int> array = {13,46,24,52,20,9};
    int n = 6;

    merge_sort(array,n);

    for(auto i : array){
        cout << i << " ";
    }
}