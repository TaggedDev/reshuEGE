#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countLetters(string str, char l) {
	int counter = 0;
	for (char c : str)
		if (c == l)
			counter++;
	return counter;
}

int findFirst(string str, char c) {
	for (int i = 0; i < str.size(); i++) // to find the first enter in string, we must count from start
		if (str[i] == c)
			return i;
}

int findLast(string str, char c) {
	for (int i = str.size()-1; i >= 0; i--) // to find the last enter in string, we must count from the back
		if (str[i] == c)
			return i;
}

int findDistance(string str, char c) {
	int f = findFirst(str, c); // we find the first enter of the element in the string
	int l = findLast(str, c); // we find the last enter of the element in the string
	if (l == f) // but if they are equal, which can't happen
		return -1; // we return -1;
	return l - f; // else, we return their difference
}

int findMaxDistance(string str) {
	int savedDistance = 0;
	for (int i = 0; i < 26; i++) {
		char letter = 'A' + i; // defining the char to check, we will check each letter in A-Z
		if (countLetters(str, letter) >= 2) { // we count letter in the string and if this letter has 2+ enters
			int tempDistance = findDistance(str, letter); // we count the distance 
			if (tempDistance > savedDistance) // if this distance is higher, we save the value
				savedDistance = tempDistance;
		}
	}
	return savedDistance; // after we check all the letters, we return the value
}

void t24() {
	ifstream file("24-164.txt");
	string line;
	int savedMax = 0;
	while (getline(file, line)) { // reading lines in files from first to last
		if (countLetters(line, 'E') <= 20) { // if line has less than 20 E letters (the condition in task)
			int foundMax = findMaxDistance(line); // we find the maximum distance between two same letters in string
			if (foundMax > savedMax) // if our found number (distance) is higher than our saved number
				savedMax = foundMax; // we save the new number, or do nothing and check the next string
		}
	}
	cout << savedMax;
	return;
}

//int main() {
//	ifstream F("24-1.txt");
//	string text;
//	getline(F, text);
//	int c = 0;
//	for (int i = 0; i < text.size(); i++)
//	{
//		if (text[i] > '0' && text[i] < '9') {
//			cout << text[i];
//
//			int j = 1;
//			bool isDigit = true;
//			while (isDigit && i + j < text.size()) {
//				if (text[i + j] > '0' && text[i + j] < '9')
//					cout << text[i+j];
//				else
//					isDigit = false;
//				j++;
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}