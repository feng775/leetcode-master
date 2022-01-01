#include<iostream>
#include<vector>
using namespace std;
int  getmaxnum(vector<int>&num)
{
	int max = num[0];
	int d = 0;
	for (int i = 1; i < num.size(); i++)
	{
		if (num[i] > max)
			max = num[i];
	}
	while (max)
	{
		max = max / 10;
		d++;
	}
	return d;
}
void radixsort(vector<int>&num, int length)
{
	vector<int>tmp(length);
	vector<int>count(10);//Í°£¨0~9£©
	int i, j, k;
	int radix = 1;
	int d = getmaxnum(num);
	for (i = 1; i <= d; i++)
	{
		for ( j = 0; j < 10; j++)
			count[j] = 0;
		for (j = 0; j < length; j++)
			count[(num[j] / radix )% 10]++;
		for (k = 1; k < 10; k++)
			count[k] = count[k - 1] + count[k];
		for ( j = length - 1; j >= 0; j--)
		{
				k = num[j] / radix % 10;
				tmp[count[k] - 1] = num[j];
				count[k]--;
		}
		for (k = 0; k< length; k++)
			num[k] = tmp[k];
	   radix *= 10;
	}
	
}
int main()
{
	vector<int>nums = { 12,27,2,45,33,16,24,58 };
	radixsort(nums, nums.size());
	for (int i : nums)
		cout << i << " ";
	return 0;
}