//https://www.acmicpc.net/problem/9935 문자열 폭발

#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

string str, boomstr, result;
stack<char> chars;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(); cout.tie();

	cin >> str >> boomstr;

	for (int i = 0; i < str.size(); i++)
	{
		chars.push(str[i]);
		if (chars.size() >= boomstr.size() && str[i] == boomstr.back())
		{
			bool isboom = true;
			for (int j = boomstr.size() - 2; j >= 0; j--)
			{
				if (str[i + j] != boomstr[j])
				{
					isboom = false;
					break;
				}
			}
			if (isboom)
			{
				chars.pop();
				i += boomstr.size();
			}
		}
	}

	while (!chars.empty())
	{
		result.push_back(chars.top());
		chars.pop();
	}

	reverse(result.begin(), result.end());
	//출력
	if (result.size() == 0) cout << "FRULA";
	else cout << result;
}
