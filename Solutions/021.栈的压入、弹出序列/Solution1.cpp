class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> sta ;
        auto pop = popV.begin() ;
        for (int push: pushV)
        {
            sta.push(push) ;
            while (!sta.empty() 
                   && pop != popV.end() 
                   && sta.top() == *pop)
            {
                ++pop ;
                sta.pop() ;
            }
        }
        return pop == popV.end() ;
    }
};
