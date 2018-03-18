#include <iostream>
using namespace std;

class honda
{
	public:
	honda()
	{
	cout<<"this is honda"<<endl;
	}};
	class hero
	{
		public:
		hero()
		{
			cout<<"this is hero"<<endl;
		}};
		class twowheeler:public honda,public hero
		{
			public:
			twowheeler()
			{
				cout<<"this is twowheeler"<<endl;
			}};
			class vehicle:public honda
			{
				public:
				vehicle()
				{
					cout<<"this is vehicle"<<endl;
				}};
				class car:public honda
				{
					public:
					car()
					{
						cout<<"this is car"<<endl;
					}};
					main()
					{
						twowheeler ob;
						vehicle ob1;
						car ob2;
						return 0;
					}
					
