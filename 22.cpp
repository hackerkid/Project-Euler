#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
using namespace std;
int main()
{
	fstream inFile;
	inFile.open("input/22.txt", ios::in);
	long long count;
	long long sum;
	long long wow;
	set <string> s;
	vector <string> epic;
	sum = 0;
	count = 1;
	string x;
	string temp;
	string yo;
	string str;
	char name[70];
	char junk[50];
	
	while(inFile.getline(junk, 50, '"') && inFile.getline(name, 50, '"')) {
        stringstream sstr;
        sstr << name;
        sstr >> str;
        epic.push_back(str);
    }
	sort(epic.begin(), epic.end());
	for (int i = 0; i < epic.size(); i++) {
		s.insert(epic[i]);
	}
	epic.assign(s.begin(), s.end());
	for (int i = 1; i <= epic.size(); i++) {
		wow = 0;
		for (int j = 0; j < epic[i-1].length(); j++) {
			if(epic[i-1][j] != ' ') {
				wow += (epic[i-1][j] - 'A') + 1;
			}
		}

		wow = wow * i;
		sum += wow;
		
	}

	cout << sum << endl;

}
