class Solution {
private:
    int cnt = 0 ;
    int r, c ;
    void dfs(vector<vector<bool>> &v, int threshold, int i, int j)
    {
        if (i < 0 || i >= r
           || j < 0 || j >= c)
            return ;
        
        if (v[i][j])
            return ;
        
        v[i][j] = true ;
        
        int sum = 0 ;
        int ii = i, jj = j ;
        while (ii)
        {
            sum += ii%10 ;
            ii /= 10 ;
        }
        while (jj)
        {
            sum += jj%10 ;
            jj /= 10 ;
        }
        if (sum > threshold)
            return ;
        
        ++cnt ;
        
        dfs(v, threshold, i-1, j) ;
        dfs(v, threshold, i+1, j) ;
        dfs(v, threshold, i, j-1) ;
        dfs(v, threshold, i, j+1) ;
    }
public:
    int movingCount(int threshold, int rows, int cols)
    {
        vector<vector<bool>> visited(rows, vector<bool>(cols, false)) ;
        cnt = 0 ;
        r = rows ;
        c = cols ;
        
        dfs(visited, threshold, 0, 0) ;
        
        return cnt ;
    }
};