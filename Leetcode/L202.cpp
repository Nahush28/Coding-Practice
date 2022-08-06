#include<bits/stdc++.h>

using namespace std;

int getSum(int n){
    int sum = 0;
    while(n > 0){
        sum += pow(n%10, 2);
        n/=10;
    }
    return sum;
}
bool isHappy(int n){
    int slow = n;
    int fast = n;
    while(fast != 1){
        slow = getSum(slow);
        fast = getSum(fast);
        fast = getSum(fast);
        if((slow == fast) && (fast != 1))
            return false;
    }

    return true;
}
int main(){
    int n;
    cin >> n;

    cout <<isHappy(n) << "\n";
    return EXIT_SUCCESS;
}