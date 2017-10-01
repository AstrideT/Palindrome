//*********************************************************************
//Putting aall letters of string in lowercase first
//Reversing a string using reverse(string fromIndex, to string at Index)
//***********************************************************************
#include<iostream>
#include<string>

using namespace std;

int main() {
string originalString;
cout << "Enter a string: ";
getline(cin, originalString);
string originalStringLowerCase("");
for (int index = 0; index < originalString.size(); index++) {
	char c = originalString[index];
	originalStringLowerCase += tolower(c);
}
string stringReadBackwards = originalStringLowerCase;//store sentence put

reverse(stringReadBackwards.begin(), stringReadBackwards.end());//reverse sentence
cout << endl<<"String(all letters in lowercase) entered is: " << originalStringLowerCase << endl<<endl;
cout << "Original string when read backwards: " << stringReadBackwards << endl<<endl;

if (originalStringLowerCase == stringReadBackwards)
{
	cout << "\"" << originalString << "\"" << " is a Palindrome" << endl;
}

else
cout << "\""<< originalString <<"\""<< " is not a Palindrome" << endl;
return 0;
}
