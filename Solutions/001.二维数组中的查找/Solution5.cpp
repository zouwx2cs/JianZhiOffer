class Solution {
private:
    bool FindInBlock(int target, vector<vector<int> > &array,
                     int leftUpRow, int leftUpColumn,
                     int rightDownRow, int rightDownColumn)
    {
        if (leftUpColumn >= rightDownColumn
            || leftUpRow >= rightDownRow)
            return false ;

        const int midColumn = (leftUpColumn + rightDownColumn)>>1 ;
        const int midRow = (leftUpRow + rightDownRow)>>1 ;
        const int midValue = array[midRow][midColumn] ;

        if (target < midValue)
        {
            if ( FindInBlock(target, array, leftUpRow, leftUpColumn, midRow, midColumn)
                || FindInBlock(target, array, midRow, leftUpColumn, rightDownRow, midColumn)
                || FindInBlock(target, array, leftUpRow, midColumn, midRow, rightDownColumn) )
                return true ;
            return false ;
        }
        else if ( target > midValue )
        {
            if ( FindInBlock(target, array, midRow+1, midColumn+1, rightDownRow, rightDownColumn)
                || FindInBlock(target, array, midRow, midColumn+1, midRow+1, rightDownColumn)
                || FindInBlock(target, array, midRow+1, midColumn, rightDownRow, midColumn+1) )
                return true ;
            return false ;
        }
        else
            return true ;
    }
public:
    bool Find(int target, vector<vector<int> > array) {
        if (0 == array.size())
            return false ;

        return FindInBlock(target, array, 0, 0, array.size(), array.at(0).size()) ;
    }
} ;