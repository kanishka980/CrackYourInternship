class twoStacks {
    stack<int>s1;
    stack <int> s2;
  public:

    twoStacks() {}

    // Function to push an integer into the stack1.
    void push1(int x) {
        s1.push(x);
        
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        s2.push(x);
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if(!s1.empty())
        {
            int ele=s1.top();
            s1.pop();
            return ele;
        }
        return -1;
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        if(!s2.empty())
        {
            int ele=s2.top();
            s2.pop();
            return ele;
        }
        return -1;
        
    }
};
