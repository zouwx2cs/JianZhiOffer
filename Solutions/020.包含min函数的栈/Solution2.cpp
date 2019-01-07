class Solution {
private:
    multiset<int> ms ;
    stack<int> sta ;
    priority_queue<int, vector<int>, greater<int>> heap ;
public:
    void push(int value) {
        sta.push(value) ;
        heap.push(value) ;
        ms.insert(value) ;
    }
    void pop() {
        int v = sta.top() ;
        sta.pop() ;
        ms.erase(ms.find(v)) ;
        if (heap.top() == v)
            heap.pop() ;
    }
    int top() {
        return sta.top() ;
    }
    int min() {
        int m ;
        for (m = heap.top(); ms.size() > 0 && ms.find(m) == ms.end(); m = heap.top())
            heap.pop() ;
        
        return m ;
    }
};