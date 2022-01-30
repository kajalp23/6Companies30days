class Solution {
public:
    vector<int> recoverArray(int n, vector<int>& sums) {
        
        multiset<int>multi(sums.begin(), sums.end()), t1, t2;
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int d = *next(multi.begin()) - *multi.begin();
            for (; !multi.empty();) {
                auto t = *multi.begin();
                t1.insert(t);
                t2.insert(t + d);
                multi.erase(multi.begin());
                multi.erase(multi.find(t + d));
            }
            if (t1.count(0)) {
                swap(multi, t1);
                ans[i] = d;
            } else {
                swap(multi, t2);
                ans[i] = -d;
            }
            t1.clear(), t2.clear();
        }
        return ans;
        
    }
};