#include<bits/stdc++.h>
#include"leetcode.cpp"

#define vi vector<int>

using namespace std;

int main(){

    vi nums1;
    vi nums2;
    readVector(nums1);
    readVector(nums2);

    unordered_map<int,int> store;
    vi ret;
    for(int i = 0; i < (int)nums1.size(); ++i){
        store[nums1[i]]++;
    }
    for(int i = 0; i < (int)nums2.size(); ++i){
        if((store.find(nums2[i]) != store.end()) && store[nums2[i]] != 0){
            store[nums2[i]]--;
            ret.push_back(nums2[i]);
        }
    }
    printVector(ret);

    return EXIT_SUCCESS;
}