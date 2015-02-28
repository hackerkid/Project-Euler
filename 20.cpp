#include <iostream>
#include <string.h>
using namespace std;

int main()
{

	int a[10001];
	bool vis[10001];
	memset(vis, 0, sizeof(vis));
	int t;
	long long sum = 0;
	
	for(int i = 1; i < 10000; i++) {
		for (int j = i + i; j < 10000; j = j + i) {
			a[j] += i;
		}

	}

	for (int i = 1; i < 10000; i++) {
		t = a[i];
		if(t < 10000) {
		if(a[t] == i and t != i and !vis[i] and !vis[t]) {
			sum += t;
			sum += i;
			vis[t] = 1;
			vis[i] = 1;
		}
		}

	}

	cout << sum << endl;

	

}



