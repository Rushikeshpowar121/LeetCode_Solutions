class MinStack {
    vector<vector<int>> v;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        int minv = getMin();
        if(v.empty() || minv>val)
            minv = val;

            v.push_back({val,minv});
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v.empty()?-1:v.back()[0];
    }
    
    int getMin() {
        return v.empty()?-1:v.back()[1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */