#include <algorithm>
#include <vector>
class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        vector<char> s;
        for(int i=0;i < str.size();i++) {
            s.push_back(str[i]);
        }
        for(int i=0;i <s.size(); i++) {
            if(count(s.begin(), s.end(), s[i]) == 1) return i;
        }
        return -1;
    }
};
