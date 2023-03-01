#include <functional>
#include <queue>
#include <vector>
class Solution {
public:
    std::priority_queue<double> pq;
    std::priority_queue<double,std::vector<double>,std::greater<double> > pq2;
    int i = 0;
    void Insert(int num) {
        if (i % 2 == 0) {
            pq2.push(num);
            pq.push(pq2.top());
            pq2.pop();
        }
        else {
            pq.push(num);
            pq2.push(pq.top());
            pq.pop();
        }
        i++;
    }

    double GetMedian() { 
        if (i % 2 == 0) {
            return (pq.top()+pq2.top())/2;
        }
        else {
            return pq.top();
        }
    }

};
