#include <bits/stdc++.h>

using namespace std;

void solve(string s)
{
    int mmap[256]{0};
    int ar[s.size()];
    for(int i = 0; i < s.size(); ++i){
        ar[i] = 0;
    }
    int length = 0;
    int marker = 0;
    for (int i = 0; i < s.size() + 1; ++i)
    {
        cout << "s[i]: " << s[i] << "\n";
        if(i == s.size()){
            ar[marker] = length;
            length = 0;
            for(auto &x: mmap){
                x = 0;
            }
            break;
        }
        if (++mmap[s.at(i)] > 1)
        {
            ar[marker] = length;
            i = marker++;
            length = 0;
            for (auto &x : mmap)
            {
                x = 0;
            }
        }
        else
            length++;
        
    }
    marker = 0;
    for(int i = 0; i < s.size(); ++i){
        marker = ar[marker] > ar[i]? marker : i;
    }
    for(int i = 0; i < s.size(); ++i){
        cout << "ar[i]: " << ar[i] << "\n";
        
    }
    cout << "marker: " << marker << " length: " << ar[marker] << "\n";

    for(int i = 0; i < ar[marker]; ++i){
        cout << s[i + marker];
    }
    cout << "\n";
}

int main()
{

    string s;
    cin >> s;
    solve(s);

    return EXIT_SUCCESS;
}