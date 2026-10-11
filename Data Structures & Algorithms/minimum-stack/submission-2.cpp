class MinStack {
private:
    stack<long long> st;
    long long minElement; 
public:
    MinStack() {
    }
    
    void push(int val) {
        long long v = val;
        if (st.empty()){
            st.push(v);
            minElement = v;
        } else if (v >= minElement) {
            st.push(v);
        } else {
            st.push(2 * v - minElement);
            minElement = v;
        }
    }
    
    void pop() {
        if (st.top() < minElement) {
            minElement = 2 * minElement - st.top();
        }
        st.pop();
    }
    
    int top() {
        if (st.top() < minElement) {
            return minElement;
        }
        return int(st.top());
    }
    
    int getMin() {
        return int(minElement);
    }
};
