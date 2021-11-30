#include<iostream>
using namespace std;
void monster();
int health = 100;
int main() {
	int room = 1;
	string input;
	string inverntory[10];
	int turns = 0;




	cout << "You wake up to find yourself in a isolated place. A strange place that may or may not be dangerous. Can you escape? Good luck!" << endl;

	do {
		cout << "Turn " << turns << endl;
		cout << "You have " << 20 - turns << " turns left." << endl;
		turns++;

		cout << "Your health:" << endl << endl;
		switch (room) {
		case 1:
			cout << "You are getting up from what you thought was your bed you start looking around being in a strange place. As you look around you see things out of the ordinary. A funny looking door going east leading to what seems like another room. So you decide to go in." << endl;
			cin >> input;
			if (input == "E")
				room = 2;

			else
				cout << "Sorry, that's not an option!" << endl;
			break;
		case 2:
			cout << "As you are entering the " << endl;
			cin >> input;
			if (input == "S")
				room = 3; 
			else
				cout << "sorry, that is not an option!" << endl;
			break;
		case 3: 
			cout << " " << endl; 
			cin >> input; 
			if (input == "E")
				room = 4;
			else
				cout << "sorry, not an option!" << endl; 
			break; 
		case 4: 
			cout << " " << endl;
			cin >> input;
			if (input == "E")
				room = 5;
			else
				cout << "sorry, not an option!" << endl; 
			break; 
		case 5: 
			cout << " " << endl; 
			cin >> input;
			if (input == "S")
				room = 6;
			else
				cout << "sorry, not an option!" << endl; 
			break; 
		case 6: 
			cout << " " << endl; 
			cin >> input; 
			if (input == "S")
				room = 7;
			else
				cout << "sorry, not an option!" << endl; 
			break; 
		case 7: 
			cout << " " << endl;
			cin >> input;
			if (input == "W")
				room = 8;
			else
				cout << "sorry, not an option!" << endl; 
			break; 
		case 8: 
			cout << " " << endl; 
			cin >> input; 
			if (input == "W")
				room = 9;
			else
				cout << "sorry, not an option!" << endl; 
			break; 
		case 9: 
			cout << " " << endl; 
			cin >> input; 
			if (input == "S")
				room = 10;
			else
				cout << "sorry, not an option!" << endl; 
			break; 
		}


	} while (input != "q" && turns < 20 && health > 0);
	if (turns > 20)
		cout << "Thanks for playing! Game Over!"
		;
}

void monster() {
	int num = rand() % 10 + 1;
	if (num < 20) {
		cout << "a skeleton appears" << endl;
		health -= 3;
		cout << "the skeleton hits you for 3 damage" << endl;
	}
	else if (num < 50) {
		cout << "a zombie appears" << endl;
		health -= 4;
		cout << "the zombie hits you for 4 damage" << endl;
	}

	else if (num < 75) {
		cout << "a spider appears" << endl;
		health -= 2;
		cout << "spider hits you for 2 damage" << endl;
	}
	else
		cout << "the room is UGLY." << endl;
}
