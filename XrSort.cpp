#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void XrSort(vector<int>&num)
{
	int gap = (num.size() - 1) / 2 + 1;
	while (gap > 1)
	{
		for (int i = 0; i + gap < num.size(); i++)
		{
			if (num[i] > num[i + gap])
				swap(num[i], num[i + gap]);
		}
		gap = (gap - 1) / 2 + 1;
	}
	for (int i = 0; i + gap < num.size(); i++)
	{
		if (num[i] > num[i + gap])
			swap(num[i], num[i + gap]);
	}
}
int main()
{
	vector<int>nums = { 12,27,2,45,33,16,24,58 };
	XrSort(nums);
	for (int i : nums)
		cout << i << " ";
	return 0;
}