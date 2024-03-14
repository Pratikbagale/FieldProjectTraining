// Valid Paranthesis

#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
                return false;
            char top = st.top();
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{'))
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    // Example usage

    cout << isValid("()") << endl;     // Output:true
    cout << isValid("()[]{}") << endl; // Output:true
    cout << isValid("9(]") << endl;    // Output:false
    return 0;
}