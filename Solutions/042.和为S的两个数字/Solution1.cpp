class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        for (int i = 0; i < array.size(); ++i)
            for (int j = i+1; j < array.size(); ++j)
                if (array.at(i) + array.at(j) == sum)
                    return {array[i], array[j]} ;
        return {} ;
    }
};