#include <iostream>
using namespace std;
#include<math.h>
class ruba
{
	int a,x;
	int i,fact=1,num;
	public:
	void call()
	{
		cin>>x;
		a=pow(x,0.5);
		cout<<a;
	}
	void dis()
	{
		cin>>num;
		for(i=1;i<=num;i++)
		fact=fact*i;
		cout<<fact;
	}
};
 main()
{
int c;
cin>>c;
	ruba o;


switch(c)
{
case 1:
	o.call();
break;
case 2:
	o.dis();
break;
default:
cout<<"worng choise";
return 0;
}
}
	
	
