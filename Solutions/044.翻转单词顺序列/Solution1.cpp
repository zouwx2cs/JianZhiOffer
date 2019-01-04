class Solution {
public:
    string ReverseSentence(string str) {
        stack<string> sta ;
        string s = "" ;
        for (char ch: str)
        {
            if (' ' == ch)
            {
                if ("" != s)
                {
                    sta.push(s) ;
                    s = "" ;
                }
                sta.push(" ") ;
            }
            else
                s += ch ;
        }
        if ("" != s)
            sta.push(s) ;
        
        s = "" ;
        while (!sta.empty())
        {
            s += sta.top() ;
            sta.pop() ;
        }
        
        return s ;
    }
};