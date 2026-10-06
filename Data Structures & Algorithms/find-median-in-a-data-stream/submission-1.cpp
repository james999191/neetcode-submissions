class MedianFinder {
    priority_queue<int, vector<int>, less<int>> smallHeap;
    priority_queue<int, vector<int>, greater<int>> largeHeap;

public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        smallHeap.push(num);
        if (!largeHeap.empty() && smallHeap.top() > largeHeap.top()){
            largeHeap.push(smallHeap.top());
            smallHeap.pop();
        }
        if (smallHeap.size() > largeHeap.size() + 1){
            largeHeap.push(smallHeap.top());
            smallHeap.pop();
        }
        if (largeHeap.size() > smallHeap.size() + 1){
            smallHeap.push(largeHeap.top());
            largeHeap.pop();
        }
        
    }
    
    double findMedian() {
        if (smallHeap.size() > largeHeap.size()){
            return smallHeap.top();
        } else if (smallHeap.size() < largeHeap.size()){
            return largeHeap.top();
        } else{
            return ((largeHeap.top() + smallHeap.top()) / 2.0);
        }
        
    }
};
