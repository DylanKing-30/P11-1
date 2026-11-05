//	P11-1.cpp	-	Dylan King	-	November 5, 2026
//
//	Description:	The program counts the letters in a string.

#include <iostream>
using namespace std;

int count_letter(string str);

int main() {
	cout << "Moo.	: " << count_letter("Moo.") << endl;
	cout << "Today is November 5	: " << count_letter("Today is November 5.") << endl;
	cout << "I don't give a Holstein for programmers that can only spell a variable one way. (Dr. Stephany)	: " << count_letter("I don't give a Holstein for programmers that can only spell a variable one way. (Dr. Stephany)") << endl;
}

int count_letter(string str) {
	int num_characters = str.length();
	int letter_count = 0;
	for (int i = 0; i < num_characters; i++) {
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
			letter_count++;
		}
	}
	return letter_count;
}