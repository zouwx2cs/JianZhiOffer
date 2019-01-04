class Solution {

private:
    priority_queue<int> low ;
    priority_queue<int, vector<int>, greater<int> >high ;
    int cnt = 0 ;

    public:
    void Insert(int num)
    {
        if (low.size() == 0 && high.size() == 0)
            low.push(num) ;
        else
        {
            if (num > low.top())
                high.push(num) ;
            else
                low.push(num) ;
        }
        
        int diff = low.size() - high.size() ;
        if (diff >= 2)
        {
            high.push(low.top()) ;
            low.pop() ;
        }
        else if (diff <= -2)
        {
            low.push(high.top()) ;
            high.pop() ;
        }
    }

    double GetMedian()
    {
        const int diff = low.size() - high.size() ;
        if (diff == 0)
            return (low.top() + high.top()) / 2.0 ;
        if (diff == 1)
            return low.top() ;
        if (diff == -1)
            return high.top() ;
        return 0 ;
    }

};