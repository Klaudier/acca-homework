#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
   int a,b,i;
   cin >> a;
   b = (int)sqrt(a);
   for(i=2;i<=b;i++)
      if( a % i == 0)
         break;
   if(i>b)
       cout << a << "Ϊ����";
   else
       cout << a << "��Ϊ����";
       return 0;
}
