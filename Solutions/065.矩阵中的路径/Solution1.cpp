class Solution {
private:
    vector<vector<bool>> *marks ; 
    bool hasSubStringPath(char *mat, vector<vector<bool>> &marks, 
                          int i, int j, char *str)
    {
        if ('\0' == *str)
            return true ;
        
        if (i < 0 || i >= marks.size()
           || j < 0 || j >= marks.at(0).size()
           || marks[i][j]
           || *str != mat[i*marks.at(0).size() + j])
            return false ;
        
        marks[i][j] = true ;
        if (hasSubStringPath(mat, marks, i-1, j-1, str+1)
           || hasSubStringPath(mat, marks, i-1, j, str+1)
           || hasSubStringPath(mat, marks, i-1, j+1, str+1)
           || hasSubStringPath(mat, marks, i, j-1, str+1)
           || hasSubStringPath(mat, marks, i, j+1, str+1)
           || hasSubStringPath(mat, marks, i+1, j-1, str+1)
           || hasSubStringPath(mat, marks, i+1, j, str+1)
           || hasSubStringPath(mat, marks, i+1, j+1, str+1))
        {
            marks[i][j] = false ;
            return true ;
        }
        else
        {
            marks[i][j] = false ;
            return false ;
        }
    }
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        vector<vector<bool>> marks(rows, vector<bool>(cols, false)) ;
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
            {
                if (matrix[i*cols + j] == *str)
                {
                    if (hasSubStringPath(matrix, marks, i, j, str))
                    {
                        return true ;
                    }
                }
            }
        return false ;
    }
};
