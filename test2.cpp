#include<iostream>
#include<vector>
#include<unordered_set>
#include<math.h>
#include<algorithm>
using namespace std;
bool judge(int i, int j)
{
	return i> j;
}
int main()
{
	vector<int>st = { 12,32 };
	sort(st.begin(), st.end(), judge);
	int n = INT32_MAX;
	int  l = INT32_MIN;
	for (int i : st)
		cout << i<<" ";
	return 0;
}