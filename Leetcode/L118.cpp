#include<bits/stdc++.h>
#include"leetcode.cpp"

using namespace std;

int main(){

    int numRows;
    cin >> numRows;

    vector<vector<int>> ret (numRows, vector<int> (1,1));
    for(int i = 1; i < numRows; ++i){
        for(int j = 1; j < i+1; ++j){
            int temp1 = 0;
            if(j==i){
                ;
            }
            else
                temp1 = ret[i-1][j];
            int temp = temp1 + ret[i-1][j-1];
            ret[i].push_back(temp);
        }
    }
    for(auto x:ret){
        printVector(x);
    }

    return EXIT_SUCCESS;
}