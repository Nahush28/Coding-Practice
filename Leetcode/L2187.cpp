#include <bits/stdc++.h>

using namespace std;

long long minimumTime(vector<int> &time, int &totalTrips){
    vector<int> curr (time.size());
    for(auto &x: curr){
        x = 0;
    }
    long sum = 0;
    long leftTime = 0;
    long rightTime = *min_element(time.begin(), time.end()) * totalTrips;
    while(leftTime < rightTime){
        long mid = leftTime + (rightTime - leftTime)/2;
        for(int i = 0; i < time.size(); ++i){
            sum += (mid / time[i]);
        }
        cout << "sum: " << sum << " leftTime: " << leftTime << "\n";

        if(sum >= totalTrips)
            rightTime = mid;
        else
            leftTime = mid+1;
        sum = 0;
        // cout << "sum: " << sum << "totalTrips: " << totalTrips << "\n";
    }

    return leftTime;
}

int main()
{
    int totalTrips = 0, temp = 0;
    vector<int> time;
    string n;
    getline(cin, n);
    stringstream ss(n);
    while (ss >> temp)
    {
        time.push_back(temp);
    }
    cin >> totalTrips;

    long ret = minimumTime(time, totalTrips);
    cout << ret << "\n";
    return EXIT_SUCCESS;
}