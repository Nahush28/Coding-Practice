#include <bits/stdc++.h>

using namespace std;

vector<int> solve()
{

    int n, target;
    int mmap[10005] (0);
    cin >> n;
    vector<int> nums(n);
    for (int &x : nums)
        cin >> x;

    cin >> target;

    vector<int> ret(2, -1);

    int l = 0, r = n - 1;
    int mid = (l + r) / 2;
    // cout << "left search \n";
    int i = 0;
    while (l < r)
    {
        int mid = (l + r) >> 1;
        // cout << l << "\n";
        if (nums[mid] >= target)
        {
            r = mid;
            // cout << r << ": r\n";
        }
        else
        {
            l = mid + 1;
            // cout << l << ":l \n";
        }

    }
    if (nums[l] != target)
        return ret;

    ret[0] = l;

    r = n - 1;
    // cout << "right search \n";

    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        // cout << mid << "\n";
        if (nums[mid] == target){
            l = mid;
            // cout << l << ":l \n";
        }
        else{
            r = mid - 1;
            // cout << r << ": r\n";
        }
    }

    ret[1] = r;

    return ret;
}
int main()
{
    vector<int> ans = solve();
    for (auto &x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";

    return EXIT_SUCCESS;
}