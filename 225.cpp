/**
225. Implement Stack using Queues
**/
class Stack {
public:
    // Push element x onto stack.
    queue <int> a,b;
    void push(int x) {
        b.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        while(!b.empty() && b.size() > 1){
            a.push(b.front());
            b.pop();
        }
        b.pop();
        while(!a.empty()){
            b.push(a.front());
            a.pop();
        }
    }

    // Get the top element.
    int top() {
        while(!b.empty() && b.size() > 1){
            a.push(b.front());
            b.pop();
        }
        int x= b.front();
        a.push(x);
        b.pop();       
        while(!a.empty()){
            b.push(a.front());
            a.pop();
        }
        return x;
    }

    // Return whether the stack is empty.
    bool empty() {
        return b.empty();
    }
};