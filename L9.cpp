#include<bits/stdc++.h>

using namespace std;


bool solve(int n){
    if(n < 10) return true;
    int l = 0;
    int c = n;
    while (c > 0){
        c/=10;
        l++;
    }    
    c = n;
    bool check = true;
    for(int i = 0;l > 1; ++i){
        cout << "l: " << l << "\n";
        int big = 1;
        int lc = l;
        while(lc > 0){
            big *= 10;
            lc--;
        }
        big /=10;
        int ldigit = c % 10;
        int fdigit = c / big % 10;
        cout << "first digit: " << fdigit << " last digit: " << ldigit << " \n";
        check = check && (fdigit == ldigit);
        c /=10;
        l -= 2;

    }
    if(check == true)
        cout << "true\n";
    else
        cout << "false\n";
    return check;

}
int main (){

    int n;
    cin >> n;
    vector<int> n3 (3);

    solve(n);

    return EXIT_SUCCESS;
}