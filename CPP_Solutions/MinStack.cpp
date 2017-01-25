class Element{
public:
    Element(int v, int m) : val(v), mini(m){}
    int getVal() { return val;  }
    int getMin() { return mini; }
private:
    int val;
    int mini;
};

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() : min(0) {}

    void push(int x) {
      if(stk.empty() || x < min){
          min = x;
      }
      stk.push(new Element(x,min));
    }

    void pop() {
        if(!stk.empty()){
          if((stk.top())->getMin() == min){
              stk.pop();
              if(!stk.empty()) min = (stk.top())->getMin();
              else min = 0;
            }
          else stk.pop();
        }
    }

    int top() {
        if(!stk.empty()) return (stk.top())->getVal();
        else return 0;
    }

    int getMin() {
        if(stk.empty()) min = 0;
        else if(!stk.empty())min = (stk.top())->getMin();
        return min;
    }
private:
    std::stack<Element*> stk;
    int min;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
