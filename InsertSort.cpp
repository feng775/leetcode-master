#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void insertsort(vector<int>&num)
{
	for (int i = 1; i < num.size(); i++)
	{
		int temp = num[i];
		int index = i - 1;
		while (index >= 0 && num[index] > temp)
		{
			num[index + 1] = num[index];
			index--;
		}
		num[index+1] = temp;
	}
}
int main()
{
	vector<int> nums = { 12,27,2,45,33,16,24 };
	insertsort(nums);
	for (int i : nums)
		cout << i << " ";
	return 0;

}