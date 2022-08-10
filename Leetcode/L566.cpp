#include<bits/stdc++.h>
#include"leetcode.cpp"

using namespace std;

int main(){

    vector<vector<int>> mat {{1,2},{3,4}};
    int r, c;
    cin >> r >> c;
    for(auto x: mat){
        printVector(x);
    }
    int h = mat.size();
    int w = mat[0].size();
    if(h*w != r*c){
        ;
    }
    vector<vector<int>> ret (r, vector<int> (c,0));
    
    int r1 = 0;
    int c1 = 0;
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            cout << "w1: " << c1 << "\n";
            ret[r1][c1++] = mat[i][j];
            if(c1 == c){
                c1 = 0;
                r1++;
            }
        }
    }

    for(auto x:ret){
        printVector(x);
    }

    return EXIT_SUCCESS;
}