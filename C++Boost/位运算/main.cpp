#include<iostream>
using namespace std;

int main() {
	int mask = 5;
	cout << mask << endl;
	cout << (1 << mask) << endl;
	cout << (1&(1 << 0)) << endl;
	cout << (1&(1 << 1))<< endl;
	cout << (1&(1 << 2)) << endl;


	return 0;
}