#include <vector>
#include <iostream>
#include <string.h>
using namespace std;

bool wow(int x)
{	
	int sum;
	int i;
	sum = 1;

	for (i = 2; i * i < x; i++) {
		if(x % i == 0) {
			sum += i;
			sum += (x / i);
		}

	}

	if(i * i == x) {
		sum += i;
	}

	if(sum > x) {
		return true;
	}
	else {
		return false;
	}

}



int main()
{
	bool a[28124];
	int t;
	long long bsum; 
	vector <int> x;
	memset(a, 0, sizeof(a));
	long long sum = 0;

	for (int i = 12; i <= 28123; i++) {
		if(wow(i)) {
			x.push_back(i);
		}

	}

	for (int i = 0; i < x.size()-1; i++) {
		for (int j = 0; j < x.size(); j++) {
			t = x[i] + x[j];
			if(t <= 28123) {
				if(a[t] == false) {
					sum += t;
					a[t] = true;
				}
			}

		}

	}

	bsum =  28123 *  28124;
	bsum /= 2;

	cout << bsum - sum << endl;




}

	

