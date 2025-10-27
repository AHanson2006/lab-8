#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main() {
	string str;
	int charCount = 0;

	do {
		cout << "Enter string: ";
		getline(cin, str);
		if (str != "q" && str != "Q") {
			cout << endl << countVowel(str) << " Vowels." << endl;
		}
	} while (str != "q" && str != "Q");
	
}

int countVowel(string str) {
	
	int vowelCount = 0;
	
	for (int i = 0; i < size(str); i++) {
		if (str[i] == 'a' || str[i] == 'A') {
			vowelCount++;
		}
		else if (str[i] == 'e' || str[i] == 'E') {
			vowelCount++;
		}
		else if (str[i] == 'i' || str[i] == 'I') {
			vowelCount++;
		}
		else if (str[i] == 'o' || str[i] == 'O') {
			vowelCount++;
		}
		else if (str[i] == 'u' || str[i] == 'U') {
			vowelCount++;
		}
	}

	return vowelCount;
}