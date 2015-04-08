#ifndef INTSTACK_H
#define INTSTACK_H


class intStack
{
    public:
        intStack (int m);

        void push (int in);
        int pop ();
        bool isFull (int m);
        bool isEmpty ();
    protected:
    private:
        int* data;
        int* sp;
};

#endif // INTSTACK_H
