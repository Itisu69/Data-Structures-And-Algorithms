#include <bits/stdc++.h>
using namespace std;

vector<int> sortbyparity(vector<int> &nums){
    vector<int> ans (nums.size(),0);

    int odd = 1, even = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0){
            ans[even] = nums[i];
            even += 2;    
        }
        else{
            ans[odd] = nums[i];
            odd += 2;
        }
    }
    return ans;
}
int main(){
    vector<int> n = {4,2,5,7};
    vector<int> ans = sortbyparity(n);

    for (auto i : ans){
        cout << i << " ";
    }
}