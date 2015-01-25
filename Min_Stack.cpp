class MinStack {
public:
    void push(int x) {
        element.push(x);
        if(min.empty()||x<=min.top()) min.push(x);
        
    }

    void pop() {
        if (element.empty()) return;
        else{
            if(min.top()==element.top()) min.pop();
            element.pop();
        }
        
    }

    int top() {
        return element.top();
        
    }

    int getMin() {
        return min.top();
        
    }
private:
    stack<int> element;
    stack<int> min;
};