#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int a;
	std::cin >> a;
	if ( a%3 == 0 || a%5 == 0 )
		cout << "Yes";
	else cout << "No";
	system("pause");
	return 0;
}
