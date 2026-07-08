#include <bits/stdc++.h>
using namespace std;

// Moore's voting algorithm
int majority_element(vector<int> &nums){
    int count = 0, ele;

    for (int i=0; i < nums.size(); i++){
        if (count == 0){
            count = 1;
            ele = nums[i];
        }
        else if (ele == nums[i]){
            count++;
        }
        else{
            count--;
        }
    }

    int temp = 0;
    for (int i=0; i < nums.size(); i++){
        if (nums[i] == ele)
            temp++;
    }

    if (temp > nums.size()/2)
        return ele;
    else
        return -1;
}