//Krystal Maughan Wednesday night class 4/26/16

#include <iostream>
#include <string>
#include <cctype>



using namespace std;

int main()
{
	
	char selection = '\0';
	string enclosedString;


	// run programme while user doesn't want to quit

	bool potato = true;
	
	while (potato == 1){


		/*cout << "Please enter a word, a sentence, or a string of numbers." << endl;
		getline(cin, enclosedString);
		cout << endl;
		char choice = '/0';*/

		
			cout << "Please enter a word, a sentence, or a string of numbers." << endl;
			getline(cin, enclosedString);
			cout << endl;
			char choice;


			cout << "USE THIS MENU TO MANIPULATE YOUR STRING" << endl;
			cout << "---------------------------------------" << endl;
			cout << "1) Inverse String" << endl;
			cout << "2) Reverse String" << endl;
			cout << "3) To Uppercase" << endl;
			cout << "4) Count Number Words" << endl;
			cout << "5) Count Consonants" << endl;
			cout << "6) Enter a Different String" << endl;
			cout << "7) Print the string" << endl;
			cout << "Q) Quit";
			cout << endl;
			
			cin >> choice;

			// Choices start:

			//===========================================================


			
			if (choice == '1')
			{
				// change upper to lower and lower to upper
				string str = enclosedString;
				

				for (int x = 0; x < str.length(); x++)
				{
					if ('a' <= str[x] && str[x] <= 'z'){
						
						str[x] = toupper(str[x]);
					}
					else if ('A' <= str[x] && str[x] <= 'Z'){
						
						str[x] = tolower(str[x]);
					}
					
				}

				cout << str << endl;
				
				getline(cin, enclosedString);
			}



			else if (choice == '2')
			{
				// Reverse String
				enclosedString = string(enclosedString.rbegin(), enclosedString.rend());
					cout << "The reverse of the string is " << enclosedString << endl;
					getline(cin, enclosedString);
				
			}
			else if (choice == '3')
			{
				//To Uppercase
				string str = enclosedString;
				for (int x = 0; x < str.length(); x++)
				{
					str[x] = toupper(str[x]);
				}

				cout << str << endl;
				


				getline(cin, enclosedString);
			}
			else if (choice == '4')
			{
				
				//Count number of words
				string str = enclosedString;
				int count = 1;

				for (int i = 0; str[i] != '\0'; i++)

				{
					if (str[i] == ' ')
						count++;

				}
				cout << "The number of words in the sentence is "  <<  count << endl;


				getline(cin, enclosedString);
			}


			else if (choice == '5')
			{
				//Count consonants
				
				int cons = 0;

				for (int i = 0; i < enclosedString.length(); i++)
				{
					if ((enclosedString.at(i) == 'a') ||
						((enclosedString.at(i) == 'e')) ||
						((enclosedString.at(i) == 'i')) ||
						((enclosedString.at(i) == 'o')) ||
						((enclosedString.at(i) == 'u')) ||
						((enclosedString.at(i) == ' ')) ||
						((enclosedString.at(i) == '.')) ||
						((enclosedString.at(i) == ',')) ||
						((enclosedString.at(i) == 'A')) ||
						((enclosedString.at(i) == 'E')) ||
						((enclosedString.at(i) == ' ')) ||
						((enclosedString.at(i) == 'I')) ||
						((enclosedString.at(i) == 'O')) ||
						((enclosedString.at(i) == 'U')) 
						)
					{
						
					}
					else cons++;

				}

				cout << "The number of consonants in the string is " << cons << endl;

			}
			else if (choice == '6')
			{
				//Enter a different string
				cout << "Enter a different string : ";
				getline(cin, enclosedString);
			}
			else if (choice == '7')
			{
				//Print the String
				cout << "The current string is: " << enclosedString << endl;
				cout << endl;
				cout << "Enter a different string : ";
				getline(cin, enclosedString);
			}
			else if (choice == 'q' || choice == 'Q')
			{
				//Quit
				cout << "You have chosen to quit the program. Thank you!" << endl;
				selection = 'q';
				potato = false;
				
			}
			else
			{
				cout << "You have not entered a valid option. Please try again" << endl;
				
			}

		

	}
	

	
	return 0;
}