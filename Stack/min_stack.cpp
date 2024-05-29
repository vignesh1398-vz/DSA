class MinStack
{
public:
    stack<int> st;
    int minValue;
    MinStack()
    {
        minValue = INT_MAX;
    }

    void push(int val)
    {
        if (val < this->minValue)
        {
            this->minValue = val;
        }
        st.push(val);
    }

    void pop()
    {
        stack<int> temp;
        this->minValue = INT_MAX;
        st.pop();
        while (st.size())
        {
            temp.push(st.top());
            st.pop();
        }
        while (temp.size())
        {
            int top = temp.top();
            if (top < this->minValue)
            {
                this->minValue = top;
            }
            st.push(top);
            temp.pop();
        }
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return this->minValue;
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