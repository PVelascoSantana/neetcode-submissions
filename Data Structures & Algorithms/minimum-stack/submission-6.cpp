class MinStack {
private:
    stack<int> pila;
    stack<int> mins;
public:
    MinStack() {
    }
    
    void push(int val) {
        pila.push(val);

        if(mins.empty() || val <= mins.top()){
            mins.push(val);
        }
    }
    
    void pop() {
        int top = pila.top();

        if(!mins.empty() && top == mins.top())
            mins.pop();
        
        pila.pop();
    }
    
    int top() {
        if(!pila.empty())
            return pila.top();
        return 0;
    }
    
    int getMin() {
        if(!mins.empty())
            return mins.top();
        return 0;
    }
};
