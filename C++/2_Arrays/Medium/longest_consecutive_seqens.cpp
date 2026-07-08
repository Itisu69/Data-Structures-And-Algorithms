#include <bits/stdc++.h>
using namespace std;

int longest_consecutive(vector<int> &nums){
    
    if (nums.size() == 0) {
        return 0;
    }

    // Initializing set and storing all the elements in it
    unordered_set<int> elements;
    for (int i = 0; i < nums.size(); i++) {
        elements.insert(nums[i]);
    }

    int longest = 1;

    // Iterating over the set
    for (auto it : elements) {
        
        // Checking if 'it' is the starting number of sequence (checking for 'it-1' inside the set)
        if (elements.find(it-1) == elements.end()) {
            // Initializing 'x' and 'cont'
            int x = it;
            int count = 1;

            // Finding consecutive numbers of 'x' (x+1)
            while (elements.find(x+1) != elements.end()) {
                count++;

                // move to the next element of the sequence
                x++;
            }
            longest = max(longest, count);
        }
    }

    return longest;
}

int main(void){
    vector<int> a = {100, 4, 200, 1, 3, 2}; 

    // cout << "Hello"
    int ans = longest_consecutive(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}