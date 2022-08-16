#include<bits/stdc++.h>
#include"leetcode.cpp"

using namespace std;

int divide(int dividend, int divisor){
    
    // Crazy O(32) solution.
    if(dividend == INT_MIN && divisor == -1) return INT_MAX;
    if(dividend == INT_MIN && divisor == 1) return INT_MIN;
    if(divisor == INT_MIN && (dividend > INT_MIN)) return 0;
    if(divisor == INT_MIN && dividend == INT_MIN) return 1;

    if (dividend == INT_MIN) {
            if (divisor == -1) {
                return INT_MAX;
            } 
            if (divisor > 0) {
                return -1+divide(dividend+divisor, divisor);
            } else if (divisor < 0) {
                return 1+divide(dividend-divisor, divisor);
            }
    }
        
    int a = abs(dividend);
    int b = abs(divisor);
    int ret = 0;
    int c = (dividend < 0) ^ (divisor < 0)? -1: 1;
    for(int i = 31; i >=0; --i){
        if(((signed)(unsigned)a >> i) - b >= 0){
            ret += 1 << i;
            a = a - (b << i);
        }
    }

    // ret = INT_MIN>>1;
    cout << "ret: " << ret*c << " this is the quotient.\n";

    return ret*c;

}

int main(){

    int dividend;
    int divisor;

    cin >> dividend;
    cin >> divisor;

    divide(dividend, divisor);
}