#include<iostream>
#include<stack>

using namespace std;
int main() {
    stack<char> st;
    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') {
            if (st.empty())
            {
                st.push(input[i]);
            }
            else
            {
                if (input[i] == '*' || input[i] == '/')
                {
                    if (st.top() == '+' || st.top() == '-') {
                        st.push(input[i]);
                    }
                    else
                    {
                        cout << st.top();
                        st.pop();
                        st.push(input[i]);
                    }
                }
                else
                {
                    while (!st.empty()) {
                        cout << st.top();
                        st.pop();
                    }
                    st.push(input[i]);
                }
            }
        }
        else
        {
            cout << input[i];
        }
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}
