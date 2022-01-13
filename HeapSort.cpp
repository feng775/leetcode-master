#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
void adjust(vector<int>&num, int i, int length)//���������
{
	int temp = num[i];
	for (int k = 2 * i + 1; k < length; k = k * 2 + 1)//�����ӽڵ㿪ʼ
	{
		if (k + 1 < length&&num[k] < num[k + 1])
			k++;
		if (k < length&&num[k] > temp)
		{
			num[i] = num[k];
			i = k;
		}
		else
			break;
	}
	num[i] = temp;
}
void HeapSort(vector<int>&num, int length)
{
	for (int i = length / 2 - 1; i >= 0; i--)//�����һ�����ӽڵ��ͷ��㿪ʼ����
	{
		adjust(num, i, num.size());
	}
	for (int i = num.size() - 1; i >= 0; i--)
	{
		swap(num[0],num[i]);
		adjust(num, 0, i);
	}
}
/*void HeapSort(vector<int>&num)
{
	priority_queue<int>q;
	for (int i = 0; i < num.size(); i++)
		q.push(num[i]);
	for (int i = num.size()-1; i >=0; i--)
	{
		num[i] = q.top();
		q.pop();
	}
}*/
int main()
{
	vector<int>nums = { 12,27,2,45,33,16,24,58 };
	HeapSort(nums,nums.size());
	for (int i : nums)
		cout << i << " ";
	return  0;
}
