#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n --;
        vector<vector<int>> dp(n + 1, vector<int> (n + 1, 1e9));
        vector<vector<int>> split(n + 1, vector<int> (n + 1, -1));
        vector<int> size(n + 1);
        for (int &i: size)
            cin >> i;
        for (int i = 0; i < n; i++)
            dp[i][i] = 0;
        for (int len = 2; len <= n; len++)
        {
            for (int l = 0, r = l + len - 1; r < n; l++, r ++)
            {
                for (int k = 0; k < r; k++)
                {
                    int left_cost = dp[l][k];
                    int right_cost = dp[k + 1][r];
                    int mul_cost = size[l] * size[k + 1] * size[r + 1];
                    int total_cost = left_cost + right_cost + mul_cost;
                    if (total_cost < dp[l][r])
                    {
                        dp[l][r] = total_cost;
                        split[l][r] = k;
                    }
                }
            }
        }
        vector<int> op(n +1, 0), cl(n + 1, 0);
 
        queue<pair<int, int>> q;
        q.push({0, n - 1});
 
        while (!q.empty())
        {
            auto p = q.front();
            q.pop();
            if (p.first >= p.second)
                continue;
            op[p.first] ++;
            cl[p.second] ++;
            q.push({p.first, split[p.first][p.second]});
            q.push({split[p.first][p.second] + 1, p.second});
        }
        for (int i = 0; i < n; i++)
        {
            while(op[i] > 0)
                cout << '(', op[i] --;
            cout << (char)('A' + i);
            while(cl[i] > 0)
                cout << ')', cl[i] --;
        }
        cout << "\n";
    }
    return 0;
}