#include <iostream>
using namespace std;

int main()
{
	int i;
	
	string data[3][2] = {
		{"Helena", "232310001"},
		{"Joshua", "232310002"},
		{"Antoni", "242310001"},
	};
	
	cout << "Nama\tNpm\n";
	
	for(i=0;i<=3;i++){
		cout << data[i][0] << "\t" << data[i][1];
	}
	
	
}

