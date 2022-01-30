class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        
       vector<pair<int, int>> v;
        for (int i = 0; i < n; ++i)
            v.emplace_back(efficiency[i], speed[i]);
        
        sort(rbegin(v), rend(v));
        long speedSum = 0, ans = 0;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (auto&[e, s] : v) {
            speedSum += s;
            minHeap.emplace(s);
            if (minHeap.size() > k) { 
                speedSum -= minHeap.top();
                minHeap.pop();
            }
            ans = max(ans, speedSum * e);
        }
        return ans % (int) (1e9 + 7);
    }
};