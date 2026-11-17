class MinStack {
public:

    stack<int> minStack;

    int min;
    stack<int> minimos;

    MinStack() {}
       
    
    void push(int val) {
        if(minStack.empty()){
            minimos.push(val);
            minStack.push(val);
        }else{
            if(val <= minimos.top()){
                minimos.push(val);
                minStack.push(val);
            }else{
               minStack.push(val);
            }
            
        }
    }
        
    
    void pop() {
        if(minimos.top()  == minStack.top() && !minimos.empty()){
            minimos.pop();
        } 
        if(!minStack.empty()){minStack.pop();}
    }
    
    int top() {
        return minStack.top();
    }
    
    int getMin() {
        return minimos.top();
    }
};
