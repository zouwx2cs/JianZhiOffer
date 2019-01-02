class Solution {
private:
    bool Verify(vector<int> &seq, int startIndex, int lastIndex) 
    {
        if (startIndex >= lastIndex)
            return true ;
        int last = seq.at(lastIndex) ;
        int mid = 0 ;
        while (mid < lastIndex && seq[mid] < last)
            ++mid ;
        int p = mid ;
        while (p < lastIndex && seq[p] > last)
            ++p ;
        
        if (p != lastIndex)
            return false ;
        
        return Verify(seq, startIndex, mid-1) 
            && Verify(seq, mid, lastIndex-1) ;
    }
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if (sequence.size() == 0)
            return false ;
        return Verify(sequence, 0, sequence.size()-1) ;
    }
};