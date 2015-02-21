#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{

	int a[20][20];
	int ans[20][20];
	int n;
	memset(ans, 0, sizeof(ans));
	fstream cin;
	cin.open("input/18.in", ios::in);
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <=i; j++) {
			cin >> a[i][j];
		}

	}
	for (int i = n -1; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			if(i == n -1) {
				ans[i][j] = a[i][j];
				continue;
			}

			else {
				ans[i][j] = max(ans[i+1][j] + a[i][j], ans[i+1][j+1] + a[i][j]);
			}

		}

	}

	cout << ans[0][0]<<endl;
}

