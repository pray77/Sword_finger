#include <queue>
#include <vector>
class Solution {
public:
    int partition(vector<int> &input, int l, int r) {
        int pivot = input[l];
        int i = l;
        int j = r;
        while(i < j) {
            while(i < j && input[j] >= pivot) j--;
            if(i < j) swap(input[i++], input[j]);
            while(i < j && input[i] < pivot) i++;
            if(i < j) swap(input[i], input[j--]);
        }
        return i;
    }
    void quickselect(vector<int> &input, int l, int r, int k) {
        int mid;
        mid = partition(input, l, r);
        for(;;){
            if (mid == k-1 ) return;
            if (mid > k-1 ) mid = partition(input, l, mid-1);
            else mid = partition(input, mid+1, r);
        }
    }
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> result;
        if (k ==0 || k > input.size()) return result;
        int l = 0, r = input.size();
        quickselect(input, l, r-1, k);
        return vector<int>({input.begin(),input.begin()+k});
    }
};
