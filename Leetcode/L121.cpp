#include<bits/stdc++.h>
#include"leetcode.cpp"

#define vi vector<int>

using namespace std;

int fmaxProfit(vector<int> nums, int relem){
    printVector(nums);
    
    if(nums.size() <= 1){
        return 0;
    }
    vector<int> l;
    vector<int> r;
    vector<int>::iterator melem = max_element(nums.begin(),nums.end());
    int prof = *melem - *min_element(nums.begin(),melem);
    cout << "prof: " << prof<< "\n";
    for(int i = 0; i < (int)nums.size(); ++i){
        if(nums.begin() + i < melem){
            l.push_back(nums[i]);
        }
        else if(nums.begin() + i > melem){
            r.push_back(nums[i]);
        }
    }

    int rp = fmaxProfit(r,*melem);
    cout << "rp: " << rp <<"\n";
    return max(prof,rp);
}
int main(){

    vi prices;
    readVector(prices);

    int maxi = 0;
    // int tempMin = 0;
    // Too slow n^2
    /*for(int i = 0; i < (int)prices.size(); ++i){
        if(tempMin == prices[i]){
            tempMin = *max_element(prices.begin() + i + 1, prices.end()) - prices[i]
        }
        maxi = max(maxi,);
    }
    */

    // maxi = fmaxProfit(prices, 0); // n*log(n)
    // cout << "max: " << maxi << "\n";

    // from discussion implement running best profit method

    int lmin = INT_MAX;
    int prof = 0;
    for(int i = 0; i < prices.size(); ++i){
        if(prices[i] < lmin){
            lmin = prices[i];
        }
        int tprof = prices[i] - lmin;
        prof = max(prof,tprof);
    }
    
    cout << "prof: " << prof << "\n";

    return EXIT_SUCCESS;
}