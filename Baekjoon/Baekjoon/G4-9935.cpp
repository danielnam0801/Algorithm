#include<iostream>
#include<stack>
#include<queue>

using namespace std;

string str, boomstr, result;
stack<char> chars;

int main()
{
	cin >> str >> boomstr;
	
	for(int i = 0; i < str.size(); i++)
	{
		if (chars.empty() || chars.top() != boomstr[0])
		{
			chars.push(str[i]);
		}
		else
		{
			bool booming = true;
			int findIdx = i;
			while (booming)
			{
				bool isboom = true;
				for (int j = 1; j < boomstr.size(); j++)
				{
					if (str[findIdx + j] != boomstr[j])
					{
						isboom = false;
						break;
					}
				}
				if (isboom)
				{
					
				}
			}
		}
	}

	/*bool isboom = true;
	for (int j = 1; j < boomstr.size(); j++)
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
		i += boomstr.size() - 1;
		continue;
	}*/

	while (!chars.empty())
	{
		result.push_back(chars.top());
		chars.pop();
	}


	if (result.size() == 0) cout << "FRULA";
	else
	{
		for (int i = result.size() - 1; i >= 0; i--)
		{
			cout << result[i];
		}
	}
}
