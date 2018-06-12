#include <iostream>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

using namespace std;

int main() {
	string query;
	// Pre-load fortunes
	string str0 = "It is certain";
	string str1 = "Signs point to yes";
	string str2 = "It is decidedly so";
	string str3 = "Without a doubt";
	string str4 = "Yes definitely";
	string str5 = "You may rely on it";
	string str6 = "As I see it, yes";
	string str7 = "Most likely";
	string str8 = "Outlook good";
	string str9 = "Yes";
	string str10 = "Reply hazy, try again";
	string str11 = "Concentrate and ask again";
	string str12 = "Ask again later";
	string str13 = "Better not tell you now";
	string str14 = "Cannot predict now";
	string str15 = "Very doubtful";
	string str16 = "Don't count on it";
	string str17 = "My reply is no";
	string str18 = "My sources say no";
	string str19 = "Outlook not so good";

	while (1) {
		// Welcome to program and input query
		cout << "\nSimply ask your query and you shall receive your answer. Type 'q' to quit" << endl;
		cin >> query;

		if (query == "q") {
			break;
		}

		else {
			// Generate a random number between 1 & 20 (0-19)
			srand(time(NULL));
			int randomnumber = rand() % 20;

			// Pause for effect
			cout << "Hmmm...Let me think" << endl;
			sleep(2.5);

			// According to the random number, print output
			switch(randomnumber) {
				case 0:
					cout << str0 << endl;
					break;
				case 1:
					cout << str1 << endl;
					break;
				case 2:
					cout << str2 << endl;
					break;
				case 3:
					cout << str3 << endl;
					break;
				case 4:
					cout << str4 << endl;
					break;
				case 5:
					cout << str5 << endl;
					break;
				case 6:
					cout << str6 << endl;
					break;
				case 7:
					cout << str7 << endl;
					break;
				case 8:
					cout << str8 << endl;
					break;
				case 9:
					cout << str9 << endl;
					break;
				case 10:
					cout << str10 << endl;
					break;
				case 11:
					cout << str11 << endl;
					break;
				case 12:
					cout << str12 << endl;
					break;
				case 13:
					cout << str13 << endl;
					break;
				case 14:
					cout << str14 << endl;
					break;
				case 15:
					cout << str15 << endl;
					break;
				case 16:
					cout << str16 << endl;
					break;
				case 17:
					cout << str17 << endl;
					break;
				case 18:
					cout << str18 << endl;
					break;
				case 19:
					cout << str19 << endl;
					break;
			}
		}
	}
	return 0;
}
