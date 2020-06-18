#include<iostream>
using namespace std;
int main()
{
	int x, gw, sw, bw;
	cin >> x;
	gw = x % 10;
	bw = x / 100;
	sw = x % 100 / 10;
	cout << "sum is:" << gw + sw + bw;
	return 0;
}
