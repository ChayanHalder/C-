#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals)
{
    sort(intervals.begin(),intervals.end());

    vector<vector<int>> res;
    int start = intervals[0][0];
    int last = intervals[0][1];

    for(int i=1;i<intervals.size();i++)
    {
        if(intervals[i][0]<=last && intervals[i][0]>=start)
            last=max(intervals[i][1],last);
        else{
            vector<int> temp{start,last};
            res.push_back(temp);
            start=intervals[i][0];
            last=intervals[i][1];
        }
    }
    vector<int> temp{start,last};
    res.push_back(temp);
    return res;
}