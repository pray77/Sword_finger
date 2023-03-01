#include <cerrno>
#include <queue>
#include <vector>
class Solution {
public:
    deque<int> pq;
    vector<int> result;
    vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
        if(size > num.size() || size ==0) return result;
        for (int i=0;i<size;i++) {
            while (!pq.empty() && num[i]>num[pq.back()]) {
                pq.pop_back();
            }
            pq.push_back(i);
        }
        result.push_back(num[pq.front()]);
        for (int i=size;i<num.size();i++) {
            int left = i - size + 1;
            while (!pq.empty() &&num[i]>num[pq.back()]) {
                pq.pop_back();
            }
            pq.push_back(i);
            if (left > pq.front()) pq.pop_front();
            result.push_back(num[pq.front()]);
        }
        return result;
    }
};
