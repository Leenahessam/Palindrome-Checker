#include <iostream>
#include<stack>
#include<cstring>
using namespace std;

bool isPalindrome(string a)
{
    stack<char> myStack;
    stack<char> myTempStack;
    bool check = false;
    if(a.length() % 2 == 0)
    {
        for(int i = 0; i < a.length(); i++)
        {
            myStack.push(a[i]);
        }
        for(int i = 0 ; i < (a.length() / 2); i++)
        {
            myTempStack.push(myStack.top());
            myStack.pop();
        }
        for(int i = 0 ; i < (a.length() / 2); i++)
        {
            if(myStack.top() == myTempStack.top())
            {
                check = true;
                myStack.pop();
                myTempStack.pop();
            }
            else{
                check = false;
                break;
            }
        }
    }
    else
        return false;
    return check;
}
/*----------------------------------*/
int main()
{
    if(isPalindrome("aba"))
    {
        cout << "True, It's Palindrome" << endl;
    }
    else
        cout << "False, It isn't Palindrome" << endl;
    return 0;
}
