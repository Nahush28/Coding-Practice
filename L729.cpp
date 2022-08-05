#include<bits/stdc++.h>

using namespace std;


/*
* Over lap between intervals a and b will be
* {max(a0, b0), min{a1, b1)}
*/
class MyCalendar{
    public:
    vector<pair<int,int>> schedule;
    MyCalendar() {

    }

    bool book(int start, int end){
        bool ret = true;
        for(int i = 0; i < schedule.size(); ++i){
            if(max(start, schedule[i].first) < min(end,schedule[i].second))
                return false;
        }
        schedule.push_back({start, end});
        return ret;
    }
};
int main () {



    return EXIT_SUCCESS;
}