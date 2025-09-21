class MyQueue {
public:
    stack<int> st;
    stack<int> helper;
    MyQueue() {
        
    }
    
    void push(int x) {//O(1)
        st.push(x);
    }
    
    int pop() {//remove at bottom
        while(st.size()){
            helper.push(st.top());
            st.pop();
        }
        int x=helper.top();
        helper.pop();
        while(helper.size()){
            st.push(helper.top());
            helper.pop();
        }
        return x;
    }
    
    int peek() {//front //O(N)
        //retrieve at bottom
        while(st.size()){
            helper.push(st.top());
            st.pop();
        }
        int x=helper.top();
        while(helper.size()){
            st.push(helper.top());
            helper.pop();
        }
        return x;
    }
    
    bool empty() {
        if(st.size()==0) return true;
        else return false;
    }
};