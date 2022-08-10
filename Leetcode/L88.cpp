#include <bits/stdc++.h>
#include "leetcode.cpp"

using namespace std;

int main()
{

    vector<int> nums1;
    vector<int> nums2;
    int m = 0, n = 0;
    readVector(nums1);
    readVector(nums2);
    cin >> m >> n;
    printVector(nums1);
    printVector(nums2);
    vector<int> ret(m+n);
    int p1 = 0, p2 = 0;
    for (int i = 0; i < (m+n); ++i)
    {
        
        if (p1 == m)
        {
            while (p2 < n)
            {
                ret[i++] = nums2[p2++];
            }
            break;
        }
        if (p2 == n)
        {
            while (p1 < m)
            {
                ret[i++] = nums1[p1++];
            }
            break;
        }
        if (nums1[p1] < nums2[p2])
        {
            cout << "nums1[p1] " << nums1[p1] << "\n";
            ret[i] = nums1[p1++];
        }
        else
        {
            cout << "nums2[p2] " << nums2[p2] << "\n";
            ret[i] = nums2[p2++];
        }
        printVector(ret);
    }
    for (int i = 0; i < m+n; ++i)
    {
        nums1[i] = ret[i];
    }
    printVector(nums1);

    return EXIT_SUCCESS;
}