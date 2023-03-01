#include <cerrno>
#include <queue>
#include <vector>
class Solution {
public:
    priority_queue<pair<int,int>> pq;
    vector<int> result;
    vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
        if(size > num.size() || size ==0) return result;
        for (int i=0;i<size;i++) {
            pq.emplace(num[i],i);
        }
        result.push_back(pq.top().first);
        for (int i=size;i<num.size();i++) {
            int left = i - size + 1;
            pq.emplace(num[i],i);
            while(left > pq.top().second) {
                pq.pop();
            }
            result.push_back(pq.top().first);
        }
        return result;
    }
};
