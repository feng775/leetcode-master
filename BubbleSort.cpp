#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void BubbleSort(vector<int>& num)
{
	for(int i=0;i<num.size()-1;i++)
		for (int j = 0; j < num.size() - i - 1; j++)
		{
			if (num[j] > num[j + 1])
				swap(num[j], num[j + 1]);
		}
}
int main()
{
	vector<int> nums = { 12,27,2,45,33,14,24 };
	BubbleSort(nums);
	for (int i : nums)
		cout << i << " ";
	return 0;
}