#include<bits/stdc++.h>
#include"../leetcode.cpp"

using namespace std;

bool containsDuplicate(vector<int> &nums){
    unordered_map<int,int>  arr {0};
    for(int i = 0; i < nums.size(); ++i){
        // cout << "arr of nums of i " << arr[nums[i]] << "\n";
        if(++arr[nums[i]] == 2)
            return true;
    }
    return false;
}
int main() {

    vector<int> nums;
    readVector(nums);
    // for(auto &x: nums){
    //     cout << x << "\n";
    // }
    cout << (containsDuplicate(nums)? "true" : "false") << "\n";
    
    return EXIT_SUCCESS;

}