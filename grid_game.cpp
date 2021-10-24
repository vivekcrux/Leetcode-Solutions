//https://leetcode.com/problems/grid-game/
class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        long long sumP[n][m+1];
        memset(sumP, 0, sizeof(sumP));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                sumP[i][j+1] = sumP[i][j] + grid[i][j];
            }
        }
        long long ans = sumP[0][m] + sumP[1][m];
        for(int i=0;i<m;i++)
        {
            ans = min(ans, max(sumP[1][i], sumP[0][m]-sumP[0][i+1]));
        }
        return ans;
    }
};
