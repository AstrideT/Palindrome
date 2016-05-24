//********************************************************************************************************
//A palindrome is a phrase that reads the same both forward and backward.
//This C++ program reads a line from cin, prints its characters in reverse order on cout, 
//and then pronounces judgment on whether the input line is a palindrome.For example, here are two sample runs of the program :
/*
Enter string : able was I ere I saw elba
able was I ere I saw elba
is a palindrome.
Enter string : madam I’m  adam
madam I’m adam
is not palindrome*/
//********************************************************************************************************

#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>


using namespace std;
int main()
{


	int randomAsk;
	string ch1, ch, line, line2;
	cout << "This game detects whether a sentence is a palindrome or not" << endl;
	cout << "A palindrome is a phrase that reads same both forward and backward" << endl;
	cout << "For example: able was I I saw elba is a palindrome " << endl;
	int pos;
	char a, b;
	
	do{
		srand(time(0));

		cout << "Enter sentence: ";
		getline(cin, line);
		pos = line.length() - 1;
		line2 = line.substr(pos, 1);
		pos = pos - 1;


		while (pos >= 0)
		{

			ch1 = line.substr(pos, 1);
			line2 = line2 + ch1;
			pos--;
		}
		cout << "Reading it  gives from back to front gives ";
		cout << line2 << endl << endl;

		cout << "Hence, ";
		if (line == line2)
			cout << line << " is a palindrome" << endl << endl;
		else
			cout << line << " is not a palindrome." << endl << endl;
		randomAsk = rand() % 10 + 1;

		switch (randomAsk)

		{

		case 1:cout << "Would you like to retry the game?"; break;

		case 2:cout << "Would you want to play again?"; break;
		case 3:cout << "Would you want to recommence the game?"; break;

		case 4:cout << "Do you wish to restart?"; break;

		case 5:cout << "Do you want to repeat the game?"; break;

		case 6:cout << "Would you like to restart over?"; break;

		case 7:cout << "Would you want to start all over?"; break;

		case 8:cout << "Do you wish to replay?"; break;

		case 9: cout << "Do you want to have another trial?"; break;

		case 10: cout << "Do you wish to make another attempt?"; break;

		}

		cout << endl;

		cout << "If yes type y, if no type n: ";

		cin >> a;
		cin.get(b);

		cout << endl;
	} while (a=='Y'||a=='y' );
	


}



