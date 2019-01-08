class Solution {
private:
    vector<string> PermutationRecursion(string::iterator start, string::iterator end)
    {
        vector<string> ques ;
        if (start + 1 == end)
            return {string(start, end)} ;
        
        char ch = *start ;
        for (auto que: PermutationRecursion(start+1, end))
        {
            que = ch + que ;
            ques.push_back(que) ;
            for (auto p = que.begin()+1; p != que.end(); ++p)
            {
                if (*p == *(p-1))
                    continue ;
                swap(*(p-1), *p) ;
                // cout << que << endl ;
                ques.push_back(que) ;
            }
        }
        return ques ;
    }
public:
    vector<string> Permutation(string str) {
        if (str.length() == 0)
            return {} ;
        if (str.length() == 1)
            return {str} ;
        sort(str.begin(), str.end()) ;
        vector<string> res ;
        res = PermutationRecursion(str.begin(), str.end()) ;
        set<string> r(res.begin(), res.end()) ;
        return vector<string>(r.begin(), r.end()) ;
    }
};
