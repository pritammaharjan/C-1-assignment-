/*
Object list

Variable                         Type
length,countVowel,
countLowercase,count             int
Uppercase,CountNumeral,
count other Symbol


sentence                  string

Algorithm
step 1: Ask the user to enter the sentence
step 2: display the result in source.cpp
step 3: calculate the value in function.cpp
Step 4: Prototype in functions.h
END
*/


#include <iostream>
#include <string>

using namespace std;

int length(string);
int CountVowel(string);
int CountLowercase(string);
int CountUppercase(string);
int CountNumeral(string);
int CountOtherSymbol(string);

void main()
{
	string sentence;

	cout << " Please Enter a Sentence :";
	getline(cin, sentence);

	cout << "\tString Length : " << length(sentence) << endl;
	cout << "\tNumber Of Vowel : " << CountVowel(sentence) << endl;
	cout << "\tNumber Of Lower case : " << CountLowercase(sentence) << endl;
	cout << "\tNumber Of Upper case : " << CountUppercase(sentence) << endl;
	cout << "\tNumber Of Numeral : " << CountNumeral(sentence) << endl;
	cout << "\tNumber Of other Symbol : " << CountOtherSymbol(sentence) << endl;
	system("pause");
}


int length(string s)
{
	int length = 0;
	length = s.length();
	return length;
}
int CountVowel(string s)
{
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			count++;
	}
	return count;
}
int CountLowercase(string s)
{
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (islower(s[i]))
			count++;
	}
	return count;
}

int CountUppercase(string s)
{
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (isupper(s[i]))
			count++;
	}
	return count;
}
int CountNumeral(string s)
{
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i]))
			count++;
	}
	return count;
}
int CountOtherSymbol(string s)
{
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (ispunct(s[i]))
			count++;
	}
	return count;
}
