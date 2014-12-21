#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	float a;
    std::cin >> a;
	int b = a;
	if (a > b)
	b++;
	int c = ( b-2 ) * 3 + 5;
	if ( b <= 2 )
		cout << "5";
	else cout << c;
	system("pause");
	return 0;
}
