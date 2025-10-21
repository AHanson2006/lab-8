#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str);

int main() {
	string str;

	cout << "Enter string: ";
	cin >> str;

	cout << countCharacter(str);
}

int countCharacter(string str) {
	int charCount = size(str);

	return charCount;
}