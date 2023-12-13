#include <iostream>
#include <string>
using namespace std;
int num[26]; // 0 to 25 corresponds to the number of occurrences of a to z
int main() {
	string data;
	int index = -1;
	char c;
	cout << "please input a string" << endl;
	// input string
	cin >> data;
	// Statistical frequency of occurrence
	for (int i = 0; i < data.size(); i++) {
		if (data[i] >= 'a' && data[i] <= 'z')
			index = data[i] - 'a';
		else if (data[i] >= 'A' && data[i] <= 'Z')
			index = data[i] - 'A';
		if (index != -1)
			num[index]++;
		index = -1;
	}
	// output
	for (int j = 0; j < 26; j++) {
		if (num[j] != 0) {
			c = 'a' + j;
			cout << "the number of " << c << " : " << num[j] << endl;
		}
	}
	return 0;
}