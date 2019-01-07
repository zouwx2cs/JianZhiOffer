class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        
        if (num.size() < size || 0 == size)
            return {} ;
        multiset<int> ms(num.begin(), size + num.begin()) ;
        priority_queue<int> pq(num.begin(), size + num.begin()) ;
        vector<int> res ; 
        
        res.push_back(pq.top()) ;
        for (int outIndex = 0, inIndex = size; 
             inIndex < num.size(); 
             ++outIndex, ++inIndex)
        {
            ms.erase(ms.find(num[outIndex])) ;
            ms.insert(num[inIndex]) ;
            pq.push(num[inIndex]) ;
            while (ms.find(pq.top()) == ms.end())
                pq.pop() ;
            res.push_back(pq.top()) ;
        }
        
        return res ;
    }
};
