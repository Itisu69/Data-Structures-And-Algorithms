#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int index = -1;
    int n = nums.size();

    // traversing from the end of the array to find the first index where the current digit is smaller than the next one (breakpoint)
    for (int i = n-2; i >= 0; i--){
        if (nums[i] < nums[i+1]){
            index = i;
            break;
        }
    }

    // If there is no breakpoint return the reversed array
    if (index == -1){
        reverse(nums.begin(), nums.end());
        // return nums;
        return;
    }

    // Again traversing from the end to find the first digit greater than the breakpoint digit and swapping them and breaking out immidiately
    for (int i = n-1; i >= 0; i--){
        if (nums[i] > nums[index]){
            swap(nums[i], nums[index]);
            break;
        }
    }

    // Reverse the array from the breakpoint index to the last index
    reverse(nums.begin() + index + 1, nums.end());

    // return nums;
}

int main(){
     // Input array
    vector<int> nums = {1, 2, 3,4};

    nextPermutation(nums);

    // Print result
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}