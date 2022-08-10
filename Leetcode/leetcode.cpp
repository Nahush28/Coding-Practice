#include<bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void readVector(vector<int> &arr){

    string n;
    getline(cin, n);
    stringstream ss(n);
    int temp;
    while(ss >> temp){
        arr.push_back(temp);
        // cout << temp << "\n";
    }
    ss.clear();
    n.clear();

    // for(auto &x: arr){
    //     cout << x << "\n";
    // }
}

void printVector(vector<int> &arr){
    for(auto &x: arr){
        cout << "arr: " << x << "\n";
    }
    cout << "\n";
}
