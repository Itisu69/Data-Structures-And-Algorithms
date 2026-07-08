#include <bits/stdc++.h>
using namespace std;

vector<int> leaders_in_array(vector<int> &nums){
    
    // 1 <= nums.length  (assuming given array has atleast 1 element)

    // set last ele as the max
    int maximum = nums[nums.size()-1];

    // Creating ans list -> leaders
    vector<int> leaders;

    // adding last ele in list initially
    leaders.push_back(maximum);

    // starting from second last index to the first one
    for (int i = nums.size()-2; i > 0; i--)
    {
        // if current ele is greater than max, add it to leaders and update max
        // to that element
        if (nums[i] > maximum){
            maximum = nums[i];
            leaders.push_back(maximum);
        }
    }

    // If question states to return leaders in the order how it appears 
    // in the array:
    // reverse(leaders.begin(), leaders.end());

    // If question states to return leaders in sorted manner:
    // sort(leaders.begin(), leaders.end());
    return leaders;
}

int main(){
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    // vector<int> nums = {4, 7, 1, 0};

    vector<int> ans = leaders_in_array(nums);
    for (auto i : ans){
        cout << i << " ";
    }
}