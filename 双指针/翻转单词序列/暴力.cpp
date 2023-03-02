#include <vector>
class Solution {
public:
    string ReverseSentence(string str) {
        vector<string>  result;
        int j=0;
        for(int i=0;i<str.size();i++) {
            if(str[i] == ' ') {
                string tmp;
                for(;j<i;j++) {
                    tmp += str[j];
                }
                result.push_back(tmp);
                j++;
            }
            if(i==str.size()-1) {
                string tmp;
                for(;j<=i;j++) {
                    tmp += str[j];
                }
                result.push_back(tmp);
            }   
        }
        string tmp2;
        for(int i=result.size()-1;i>=0;i--) {
            if(i == 0) tmp2 += result[i];
            else {
                tmp2 += result[i];
                tmp2 += ' ';
            }
        }
        return tmp2;
    }
};
