#include <iostream>
using namespace std;

int main()
{
	int bakteri = 15, menit;
	
	for(int menit = 1; menit <= 15; menit++)
	{
		bakteri *= 2;
		cout<<menit <<"menit: " <<bakteri <<" bakteri" <<endl;
	}
	return 0;
}
