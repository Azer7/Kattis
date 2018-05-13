#include <iostream>
#include <string>

using namespace std;

string morseCodes[] = { ".-", "-...", "-.-." , "-.." , "." , "..-." , "--." , "...." , ".." , ",---" , "-.-" , ".-.." , "--" , "-." , "---" ,".--." ,"--.-" ,".-." ,"..." ,"-" ,"..-" , "...-" , ".--" , "-..-" , "-.--" , "--.." };
int lengthOfMorses[26];

string charToMorse(char c) {
	if (c >= 65 && c <= 90) {
		return morseCodes[c - 65];
	}
	else {
		switch (c) {
		case '_':
			return "..--";
		case ',':
			return ".-.-";
		case '.':
			return "---.";
		case '?':
			return "----";
		}
	}
}

int charToMorseLength(char c) {
	if (c >= 65 && c <= 90) {
		return lengthOfMorses[c - 65];
	}
	else {
		return 4;
	}
}


int main()
{
	for (int i = 0; i < 26; i++) {
		lengthOfMorses[i] = morseCodes[i].size();
	}
	string lengthString, secretMessage;
	cin >> secretMessage;
	while(secretMessage != "") {
		for (int i = secretMessage.size() - 1; i >= 0; i--) {
			lengthString += charToMorseLength(secretMessage[i]);
		}
		for (int i = 0; i < lengthString.size(); i++) {

		}
		getline(cin, secretMessage);
	}
	return 0;
}
