class Solution {
private:
    static bool cmp(string &a, string &b)
    {
        return a+b < b+a ;
    }
public:
    string PrintMinNumber(vector<int> numbers) {
        vector<string> strNum ;
        for (auto num: numbers)
            strNum.push_back(to_string(num)) ;
        sort(strNum.begin(), strNum.end(), cmp) ;
        string res = "" ;
        for (auto str: strNum)
            res += str ;
        return res ;
    }
};
