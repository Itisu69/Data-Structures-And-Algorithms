#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange_array(vector<int> &nums){
    vector<int> ans (nums.size(),0);

    int negative = 1, positive = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0){
            ans[negative] = nums[i];
            negative += 2;
        }
        else{
            ans[positive] = nums[i];
            positive += 2;
        }
    }
    return ans;
}

int main(){
    vector<int> a = {3,1,-2,-5,2,-4};

    vector<int> ans = rearrange_array(a);

    for (auto i : ans){
        cout << i << " ";
    }
}