class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        if (0 == matrix.size() || 0 == matrix.at(0).size())
            return {} ;
        
        int dir = 0 ;
        
        int left = 0 ;
        int up = 0 ;
        int right = matrix.at(0).size()-1 ;
        int down = matrix.size()-1 ;
        
        int step = (right + 1) * (down + 1) ;
        
        vector<int> res ;
        int i = 0, j = 0 ;
        while (step--)
        {
            res.push_back(matrix[i][j]) ;
            switch (dir)
            {
                case 0 : 
                    ++j ;
                    if (j > right)
                    {
                        dir = 1 ;
                        --j ;
                        ++i ;
                        ++up ;
                    }
                    break ;
                case 1:
                    ++i ;
                    if (i > down)
                    {
                        dir = 2 ;
                        --i ;
                        --j ;
                        --right ;
                    }
                    break ;
                case 2 :
                    --j ;
                    if (j < left)
                    {
                        dir = 3 ;
                        ++j ;
                        --i ;
                        --down ;
                    }
                    break ;
                case 3:
                    --i ;
                    if (i < up)
                    {
                        dir = 0 ;
                        ++i ;
                        ++j ;
                        ++left ;
                    }
                    break ;
                default :
                    break ;
            }
        }
        
        return res ;
    }
};