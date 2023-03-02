#include <algorithm>
#include <string>
class Solution {
public:
    string LeftRotateString(string str, int n) {
        if(str.size()==0) return  str;
        int m = n%str.size();
        reverse(str.begin(),str.end());
        reverse(str.begin(), str.begin()+str.size()-m);
        reverse(str.begin()+str.size()-m, str.end());
        return str;
    }
};
