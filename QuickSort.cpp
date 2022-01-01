#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int getnum(vector<int>&num, int left, int right)
{
	int target = num[left];
	while (left < right)
	{
		while (left<right&&num[right]>target)
			right--;
		num[left] = num[right];
		while (left < right&&num[left] < target)
			left++;
		num[right] = num[left];
	}
	num[left] = target;
	return left;
}
void QuickSort(vector<int>&num, int left, int right)
{
	if (left < right)
	{
		int mid = getnum(num, left, right);
		QuickSort(num, left, mid);
		QuickSort(num, mid + 1, right);
	}
}
int main()
{
	vector<int> nums = { 12,27,2,45,33,15,24 };
	QuickSort(nums, 0, nums.size() - 1);
	for (int i : nums)
		cout << i << " ";
	return 0;
}