#include <iostream>
using namespace std;
class ruba
{
	private:
	int x;
	public:
	ruba()
	{
		x=3;
	}

void display();

};
void ruba::display()
{
	cout<<x;
}
int main()
{
	ruba o;
	o.display();
	
	return 0;

}
