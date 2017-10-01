//********************************************************************************************************
//A palindrome is a phrase that reads the same both forward and backward.
//This C++ program reads a line input by user,prints the same sentence without spaces and all letters in lowercase and 
//and then pronounces judgment on whether the input line is a palindrome.
//********************************************************************************************************

#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()
{


	int randomAsk;
	string ch1, ch, line1, line2,line3;
	cout << "********************************************************************************" << endl << endl;
	cout << "This program detects whether a sentence is a palindrome or not" << endl;
	cout << "A palindrome is a phrase that reads same both forward and backward" << endl;
	cout << "It ignores spaces in between the letters and the capitalization of letters" << endl;
	cout << "Examples of palindromes are: " << endl
		<< "dad, MUM, Mom, RAce Car,Able was I I saw Elba, Never odd or even" <<
		endl << endl;
	cout << "********************************************************************************" << endl;
	int pos;
	char a, b;
	
	do{
		srand(time(0));

		cout <<endl<< "Enter any sentence: ";                  //Prompts user to enter input
		getline(cin, line1);                        //Line1 is the line input by user
		line2 = "";                                 //Initializes line2
		for (int x = 0; x < line1.length(); x++)    
		{
			if (line1[x] != ' ')
			{
				b = tolower(line1[x]);
				line2 = line2 + b;         //Line2 is line1 without spaces and all letters in lowercase
		
			}
		}
		cout <<endl<<endl<< "Same sentence without spaces and all letters in lowercase is:" <<endl<<
		line2<<endl<<endl;
		pos = line2.length() - 1;
		line3 = line2.substr(pos, 1);           
		pos = pos - 1;


		while (pos >= 0)   //Starts getting characters of line3 from the end to the front
		{

			ch1 = line2.substr(pos, 1);
			line3 = line3 + ch1;               //Line3 is line2 from back to front
			pos--;
		}
		
		cout << "---->";
		if (line2 == line3)
			cout << line1 << " is a palindrome" << endl << endl;
		else
			cout << line1 << " is not a palindrome." << endl << endl;
		randomAsk = rand() % 10 + 1;

		switch (randomAsk)

		{
		case 1:cout << "Would you like to try another sentence?"; break;
		case 2:cout << "Do you want to try a different sentence?"; break;
		case 3:cout << "Would you want to recommence?"; break;
		case 4:cout << "Do you wish to restart?"; break;
		case 5:cout << "Do you want to repeat the game?"; break;
		case 6:cout << "Would you like to restart over?"; break;
		case 7:cout << "Do you want to start all over?"; break;
		case 8:cout << "Do you wish to redo another sentence?"; break;
		case 9: cout << "Do you want to have another trial?"; break;
		case 10: cout << "Do you wish to make another attempt?"; break;
		}

		cout << endl;

		cout << "If yes type y, if no type n: ";

		cin >> a;
		cin.get(b);

		cout << endl;
	} while (a=='Y'||a=='y' );
	cout << "**Don't hesitate to stop by and check other words**"<<endl;
}






