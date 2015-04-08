#include <iostream>
#include "intStack.h"

using namespace std;

#define in "push"
#define out "pop"

int main()
{
    int n, m;
    cout<< "Please input how many times that you want to do:";
    cin>> n;
    cout<< "Please input the size of the stack:";
    cin>> m;
    intStack sta (m);

    while ( n--)
    {
        string way;
        int ans;
        cin>> way;

        if ( way == in )
        {
            cin>> ans;
            if ( !sta.isFull(m) )
            {
                sta.push (ans);
            }
            else
            {
                cout<< "The stack is full!";
            }
        }

        if ( way == out )
        {
            if ( !sta.isEmpty() )
            {
                ans = sta.pop();
                cout<< ans<< endl;
            }
            else
            {
                cout<< "The stack is empty!";
            }
        }
    }
    return 0;
}
