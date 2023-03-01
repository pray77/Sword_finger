#include <set>
class Solution
{
public:
  //Insert one char from stringstream
    int hashmap[128]={};
    string str;
    void Insert(char ch) {
         hashmap[ch] += 1;
         str.push_back(ch);
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce() {
        for (int n : str) {
            if (hashmap[n] == 1) {
                return n;
            }
        }
        return '#';
    }
};
