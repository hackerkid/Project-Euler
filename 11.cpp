#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	int a[20][20];
	long long pro = 0;
	long long temp;
	fstream fcin;

	fcin.open("input/11.in", ios::in);

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			fcin >> a[i][j];
		}
	}

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			
			temp = 1;
			
			if(j + 4 < 20) {
				for (int k = j; k < j+4; k++) {
					temp = temp * a[i][k];
				}
			}

			pro = max(pro, temp);
			temp = 1;
			
			if(i + 4 < 20) {
				for (int k = i; k < i+4; k++) {
					temp = temp * a[k][j];
				}
			}

			pro = max(pro, temp);
			temp = 1;
			
			if((i + 4 < 20) and (j + 4 < 20)) {
				for (int r = i, p = j; r < i+4; r++, p++) {
					temp = temp * a[r][p];
				}
			}

			pro = max(pro, temp);
			temp = 1;
			
			if((i + 4 < 20) and (j - 4 >= 0)) {
				for (int r = i, p = j; r < (i+4); r++, p--) {
					temp = temp * a[r][p];
				}
			}
		
			pro = max(pro, temp);


		}

	}

	cout << pro << endl;

}
