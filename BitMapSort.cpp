#include<iostream>
#include<vector>
#include<math.h>
#include<bitset>
using namespace std;
int main()
{
	
	vector< bitset<32>>b(2);
	b[0].set(10);
	int i = 10;
	if (b[i / 32].test(i%32))
		cout<<"true"<<endl;
	cout << b[1].count();
	return  0;
}