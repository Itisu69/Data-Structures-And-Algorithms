// This file contains solution of problems till 1 to 

#include <bits/stdc++.h>
using namespace std;

int largest_element(vector<int> &arr){
    int largest = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] >= largest) swap(largest, arr[i]);
    }
    return largest;
}

int second_largest(vector<int> &arr){
    int largest = 0, s_largest = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] >= largest){
            s_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > s_largest)
        {
            s_largest = arr[i];
        }
    }
    return s_largest;
}

// Check if array is sorted and rotated, return true if both the conditions are met else false
bool rotatedAndsorted(vector<int> &arr){
    int breaks = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > arr[(i+1) % arr.size()])
            breaks++;
    }
    
    return breaks <= 1;
}


// removing duplicate elements and modifying array
int removeDuplicates(vector<int> &nums){
    int n = nums.size(), i = 0;

    for (int j = 0; j < n; j++)
    {
        if (nums[j] != nums[i]){
            nums[i+1] = nums[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    vector<int> a = {2,1,3,4};
    cout << rotatedAndsorted(a);    
}
