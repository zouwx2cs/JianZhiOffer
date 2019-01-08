class Solution {
private:
    int partition(vector<int>&arr, int begin, int end)
    {
        int pivot = arr[begin] ;
        while (begin < end)
        {
            while (begin < end && arr[--end] >= pivot)
                ;
                arr[begin] = arr[end] ;
            while (begin < end && arr[++begin] <= pivot)
                ;
                arr[end] = arr[begin] ;
        }
        arr[begin] = pivot ;
        return begin ;
    }
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        if (input.size() <= 0 || k > input.size())
            return {} ;
        if (input.size() == k)
            return input ;

        int l = 0, r = input.size() ;
        for (int pos = partition(input, l, r);
             pos != k && pos != k-1; pos = partition(input, l, r))
        {
            if (pos < k)
                l = pos ;
            else
                r = pos ;
        }

        return vector<int>(input.begin(), input.begin() + k) ;
    }
};