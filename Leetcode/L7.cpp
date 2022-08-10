#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    
    int rev = 0;
    while (n != 0)
    {
        if( rev > INT_MAX/10 || rev < INT_MIN)
        break;
        rev = rev * 10 + n % 10;
        n /=10;
        
    }
    cout << "rev " << rev << "\n";

    return EXIT_SUCCESS;
}