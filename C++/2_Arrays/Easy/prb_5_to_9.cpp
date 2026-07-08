#include <bits/stdc++.h>
using namespace std;

// Rotate array by k places
void rotate_array(vector<int> &nums, int k){
    k %= nums.size();
    // rotate left
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
    reverse(nums.begin(), nums.end());
    
    // right
    // reverse(nums.begin(), nums.end());
    // reverse(nums.begin(), nums.begin()+k);
    // reverse(nums.begin()+k, nums.end());
}

// Move all zeroes to the end of an array
void moveZeroes(vector<int> &nums){
    int j = -1;

    // First finding the position of first 0 in array
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0){
            j = i;
            break;
        }
    }
    
    // swapping non zero elements with zeroes till end
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

// Union of two sorted arrays
vector<int> Union(vector<int> &nums1, vector<int> &nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();

    int i = 0; // points to first index of nums1
    int j = 0; // points to first index of nums2

    vector<int> unionarr;

    while (i < n1 && j < n2)
    {
        if(nums1[i] <= nums2[j]){
            if(unionarr.size() == 0 || unionarr.back() != nums1[i]){
                unionarr.push_back(nums1[i]);
            }
            i++;
        }
        else{
            if(unionarr.size() == 0 || unionarr.back() != nums2[j]){
                unionarr.push_back(nums2[j]);
            }
            j++;
        }
    }
    
    while (j < n2){
        if(unionarr.size() == 0 || unionarr.back() != nums2[j]){
            unionarr.push_back(nums2[j]);
        }
        j++;    
    }
    
    while (i < n1){
        if(unionarr.size() == 0 || unionarr.back() != nums1[i]){
            unionarr.push_back(nums1[i]);
        }
        i++;
    }
    
    return unionarr;
}

// Intersection of 2 arrays
vector<int> arr_intersection(vector<int> &a, vector<int> &b){
    int i = 0;
    int j = 0;
    vector<int> ans;

    int n = a.size(), m = b.size();

    while (i < n && j < m)
    {
        if (a[i] < b[j]) i++;
        else if (b[j] < a[i]) j++;
        else{
            ans.push_back(a[i]);
            i++; 
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int> a;
    a = {1,1,2,4,5,3,2};
    vector<int> b;
    b = {3,4,7,1,3,2};

    vector<int> c;
    c = arr_intersection(a, b);
    for(auto i : c)
        cout << c[i] << " ";
}