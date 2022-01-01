#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Merge(vector<int>&num, int start, int end, vector<int>&result)
{
	int startindex = start;
	int  leftlength = (end - start + 1) / 2 + 1;
	int rightindex =start+leftlength;
	int resultindex = start;
	while (startindex < start + leftlength && rightindex < end+1)
	{
		if (num[startindex] <= num[rightindex])
			result[resultindex++] = num[startindex++];
		else
			result[resultindex++] = num[rightindex++];
	}
	while (startindex < start + leftlength)
	{
		result[resultindex++] = num[startindex++];
	}
	while (rightindex < end+1)
	{

		result[resultindex++] = num[rightindex++];
	}
}
void MergeSort(vector<int>&num,int start ,int end,vector<int>&result)
{
	if (end - start == 1)
	{ 
		if(num[start]> num[end])
			swap(num[start], num[end]);
		return;
	}
	else if (end - start == 0)
		return;
	else
	{
		MergeSort(num, start, (end - start + 1) / 2 + start, result);
		MergeSort(num, (end - start + 1) / 2 + start + 1, end,result);
		Merge(num, start, end, result);
		for (int i = start; i <=end; i++)
			num[i] = result[i];
	}
}
int main()
{
	vector<int>nums = { 12,27,2,45,33,16,24,58 };
	vector<int> result(nums.size());
	MergeSort(nums,0,nums.size()-1,result);
	for (int i : nums)
		cout << i << " ";
	return 0;
}