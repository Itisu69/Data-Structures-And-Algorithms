#include <bits/stdc++.h>
using namespace std;

// Missing number using XOR
int missingNumber(vector<int> &arr){
    int x1=  0, x2 = 0;
    int n = arr.size()-1;

    for (int i = 0; i < n; i++)
    {
        x1 = x1 ^ arr[i];
        x2 = x2 ^ (i+1);
    }
    x1 = x1 ^ arr.size();
    return x1 ^ x2;
}

// Max consecutive ones
int findMaxConsecutiveOnes(vector<int> &nums) {
    int count = 0, max = 0;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] == 1){
            count++;
        }
        else{
            if (max <= count){
                max = count;
            }
            count = 0;
        }
    }
    if (max <= count)
        max = count;
    return max;
}

// Longest subarray with given sum K (positives)
int longest_subarray_with_sumK_pos (vector<int> &nums, int k){
    int left = 0, right = 0, sum = nums[0];
    int maxLen = 0;

    while (right < nums.size())
    {
        
        while (left <= right && sum > k)
        {
            sum -= nums[left++];
        }
        
        if (sum == k)
            maxLen = max(maxLen, right-left + 1);
        
        right++;
        if (right < nums.size()) sum += nums[right];
    }
    return maxLen;
}

// Longest subarray with sum k
int longest_sum_subarray(vector<int> &nums, int k){
    int maxlen = 0;
    long long sum = 0;
    map <long long, int> preSummap;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum == k){
            maxlen = max(maxlen, i + 1);
        }

        long long remaining = sum - k;

        if (preSummap.find(remaining) != preSummap.end()){
            int len = i - preSummap[remaining];
            maxlen = max(maxlen, len);
        }

        if (preSummap.find(remaining) == preSummap.end()){
            preSummap[sum] = i;
        }
    }
    return maxlen;
}


int main(){

}