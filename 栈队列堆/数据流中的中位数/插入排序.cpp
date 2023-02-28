#include <vector>
class Solution {
public:
    vector<double> f;
    void Insert(int num) {
        int n = f.size();
        if(f.empty()) f.push_back(num);
        else {
                int i = 0;
                for(; i < n; i++) {
                    if(num <= f[i]) {
                        break;
                    }
                }
                f.insert(f.begin()+i, num);
            }
    }

    double GetMedian() { 
        if (f.size() % 2 == 0) return (f[f.size()/2-1] + f[f.size()/2])/2;
        else
         return f[f.size()/2];
    }

};
