#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int len = str.length();
	int count_z = 0, count_o = 0;

	// calculate the number of z and o
	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'z')
		{
			count_z++;
		}
		else if (str[i] == 'o')
		{
			count_o++;
		}
	}

	// checking the condition
	if ((count_z * 2) == count_o)
	{
		cout << "Yes\n";
	}
	else
	{
		cout << "No\n";
	}

	return 0;
}