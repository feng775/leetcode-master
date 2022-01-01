#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool  judge(int i, int j)
{
		return i> j;

}
int main()
{
	vector<int> nums = { 12,27,2,45,33,15,24 };
	sort(nums.begin(), nums.end(),judge);
	for (int i : nums)
		cout << i << " ";
	return 0;
}