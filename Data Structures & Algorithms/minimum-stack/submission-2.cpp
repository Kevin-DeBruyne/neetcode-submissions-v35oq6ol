class MinStack {
public:
    vector<int>v1;
    vector<int>tmin;
    // int top;
    int mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        // top=val;
        v1.push_back(val);
        mini=min(mini, val);
        tmin.push_back(mini);
    }
    
    void pop() {
        v1.pop_back();
        tmin.pop_back();
        if(tmin.size()==0){
            mini=INT_MAX;
        }
        else{
            mini=tmin[tmin.size()-1];
        }
    }
    
    int top() {
        return v1[v1.size()-1];
    }
    
    int getMin() {
        return mini;
    }
};
