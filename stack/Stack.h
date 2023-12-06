class Stack {
    private:
        int stack[16];
        int sp;

    public:
        Stack();
        void push(int value);
        int pop();
};