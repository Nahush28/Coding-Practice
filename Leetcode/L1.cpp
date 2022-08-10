#include<bits/stdc++.h>
#include"leetcode.cpp"

using namespace std;

int main(){

    int target;
    vector<int> nums;

    readVector(nums);
    cin >> target;

    unordered_map<int,int> tar2;
    vector<int> ret;
    int n = nums.size();
    for(int i = 0; i < n; ++i){
        if(tar2.find(target-nums[i]) != tar2.end()){
            ret.push_back(tar2[target-nums[i]]);
            ret.push_back(i);
        }
        else{
            tar2.insert({nums[i],i});
        }
    }

    for(auto &x:ret){
        cout << x << "\n";
    }

    return EXIT_SUCCESS;
}