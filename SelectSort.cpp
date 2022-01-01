#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void SelectSort(vector<int>& num)
{
	for (int i = 0; i < num.size(); i++)
	{
		int m = i;
		int min = num[i];
		for (int j = i + 1; j < num.size(); j++)
		{
			if (num[j] < min)
			{
				min = num[j];
				 m = j;
			}
		}
		swap(num[i], num[m]);
	}
}

int main()
{
	vector<int> nums = { 12,27,2,45,33,15,24 };
	SelectSort(nums);
	for (int i : nums)
		cout << i << " ";
	return 0;
}