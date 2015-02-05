#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
#define n 13
long long findpro(int a[n])
{	
	long long pro = 1;
	for (int i = 0; i < n; i++) {
		pro *= a[i];
	}

	return pro;
}

void shiftright(int a[n])
{
	for (int i = n-1; i >= 0; i--) {
		a[i] = a[i-1];
	}

}

int main()
{

	fstream fcin;
	int a[n];
	for (int i = 0; i < n;i++) {
		a[i] = 0;
	}
	long long pro;
	long long maxy;
	int t;

	maxy = -1;
	pro = 1;
	fcin.open("input/8.in", ios::in);
	int x;
	char k;

	while(!fcin.eof()) {
		fcin >> k;
		x = k - '0';
		shiftright(a);
		a[0] = x;
		pro = findpro(a);
		maxy = max(pro, maxy);

	}

	cout << maxy << endl;
}
