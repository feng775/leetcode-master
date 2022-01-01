#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;


int main()
{
	string s = "01";
	cout << s.find('2');
	return 0;
	/*int k = 2;
	vector<string> strings = { "123","123","231","32"};
	unordered_map<string, int>st;
	vector<vector<string>>ss;
	vector<string>result;
	int maxnum = 0;
	for (string i : strings)
		st[i]++;
	for (auto i : st)
		if (i.second > maxnum)
			maxnum = i.second;
	while (k > 0)
	{
		for (auto i : st)
		{
			if ((i.second == maxnum) && k > 0)
			{
				result.clear();
				result.push_back(i.first);
				result.push_back(to_string(i.second));
				ss.push_back(result);
				k--;
			}
		}
		maxnum--;
	}
	for (int i = 0; i < ss.size(); i++)
		for(int j=0;j<2;j++)
		{
			cout << ss[i][j]<<" ";
		}
		return 0;*/
}