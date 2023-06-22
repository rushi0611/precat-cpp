//Dynamic memory allocation in c++
#include<iostream>
using namespace std;

class Box
{
	
	public:
		
		int x,y;
		
	Box()                //no argument constrctor
		{
			x=100;
			y=200;
			
		}
		
		
		void disp()
		{
			cout<<"x:"<<x<<"y:"<<y<<endl;
		}
};

int main()
{
   Box b2;
 
	
	b2.disp();
	
	
	return 0;
	
}

