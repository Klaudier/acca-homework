#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int DX[a];
	for(int i = 0; i < a; i++)
	{
		cin >> DX[i];
	}
	for(int n = a-1; n >= 0; n--)
	{
		cout << DX[n] << " ";
	}
	return 0;
}
