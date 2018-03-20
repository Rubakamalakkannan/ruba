#include <iostream>
using namespace std;

int main() 
{
	int first,second,temp;
	cin>>first>>second;
	temp=first;
	first=second;
	second=temp;
	cout<<first<<"\t"<<second;
	return 0;
}
