#include<iostream>
#include<cstdlib>
using namespace std;

void Swap(int *X,int *Y)
{
	int Temp = *X ; 
	*X = *Y ; 
	*Y = Temp;
}

void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a,b;
	cin >> a >> b;
    Swap(&a,&b);
	cout << a << b;
	int c,d;
	cin >> c >> d;
    swap(c,d);
	cout << c << d;
	return 0;
}
