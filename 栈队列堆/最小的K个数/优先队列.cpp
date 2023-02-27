#include <queue>
#include <vector>
class Solution {
public:
    priority_queue<int, vector<int>> pq;
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        int size = input.size();
        vector<int> result;
        for(const int val : input) pq.push(val);
        while(pq.size()>k) pq.pop();
        for(int i=0;i<k;i++) {
            result.push_back(pq.top());
            pq.pop();
        } 
        return result;
    }
};
