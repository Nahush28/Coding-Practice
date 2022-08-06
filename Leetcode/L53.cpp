#include<bits/stdc++.h>
#include"leetcode.cpp"

using namespace std;


int maxSubArray(vector<int> &nums){
    int runningSum = nums[0];
    int maxSubArraySum = nums[0];
    for(int i = 1 ; i < nums.size(); ++i){
        if(runningSum < 0){
            runningSum = nums[i];
        }
        else{
            runningSum += nums[i];
        }
        maxSubArraySum = max(maxSubArraySum, runningSum);
    }

    return maxSubArraySum;

}
int main(){

    vector<int> arr;
    readVector(arr);
    // cout << "finishes readvector \n";
    cout << maxSubArray(arr) << "\n";

    return EXIT_SUCCESS;
}