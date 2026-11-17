class MinStack {
public:


    stack<long >minStack;
    long min;
    MinStack() {
        
    }
    
    void push(int val) {
        if(minStack.empty()){
            min = val;
            minStack.push(0);
        }else{
            
            minStack.push(val - min);
            if( val < min) { min = val;}
        }
    }
    
    void pop() {

        if(minStack.empty()) return;

        if(minStack.top() < 0){
            min = min - minStack.top() ;
        }
        minStack.pop();
    }
    
    int top() {
        if(minStack.top() > 0){
            return minStack.top() + (int)min; 
        }else{
            return (int)min;
        }
        
    }
        
    
    int getMin() {
        return (int)min;
    }
};
