#include <bits/stdc++.h>

using namespace std;

string convert(string s, int numRows){
    string ret = "";

    if(numRows <= 1)
        return s;

    int n = s.size();

    for(int i = 0; i < numRows; ++i){
        for(int j = i; j < n; j = j + 2*numRows - 2){
            ret.push_back(s[j]);
            if((j + 2 * numRows - 2 < n) || ((i > 0) && (i < numRows - 1))){
                ret.push_back(s[2*numRows - 2 + j - 2*i]);
            }
        }
    }

    return ret;
}

int main(){

    string ss;
    int n;
    cin >> ss;
    cin >> n;
    cout << convert(ss,n) << "\n";

    return EXIT_SUCCESS;
}