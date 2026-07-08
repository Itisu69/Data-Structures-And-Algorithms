#include <bits/stdc++.h>
using namespace std;

// Kadane's algo
int maxSubarray(vector<int> &nums){
    int current_sum = 0, max_sum = INT_MIN;

    // To find subarray too
    int ansStart = -1, ansEnd = -1, start = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        current_sum += nums[i];
        
        if (current_sum == 0) start = i;
        if (current_sum > max_sum){
            max_sum = current_sum;
            ansStart = start;
            ansEnd = i;
        }
        if (current_sum < 0){
            current_sum = 0;
        }
    }

    // Printing the subbarray
    cout << "[";
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "]";
    
    // Returning the sum
    return max_sum;
}

int main(void){
    vector<int> n = {5,4,-1,7,8};

    cout << maxSubarray(n);
}