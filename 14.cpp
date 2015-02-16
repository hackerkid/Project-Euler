#include <iostream>

using namespace std;

int coll(long long x)
{
	if(x == 1)
		return 1;

	if(x % 2 == 0) {
		return 1 + coll(x/2);
	}

	return 1 + coll(3 * x + 1);

}

int main()
{

	int x;
	int y;
	int z;
	int t;
	long long temp;

	long long maxi = -1;	
	for (int i = 1; i < 1000000; i++) {
		temp = coll(i);
		if(temp > maxi) {
			t = i;
			maxi = temp;
			cout << i << " " << temp <<endl;
		}

	}



}
