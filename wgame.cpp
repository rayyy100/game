#include<iostream>
using namespace std;
void monster(); 
int health = 100; 
int main() {
	int room = 1;
	string input;
	string inverntory[10];
	int turns = 0;




	cout << "You wake up to find yourself in a cold icolated dungeon. Can you escape? Good luck!!!" << endl;

	do {
		cout << "It is turn " << turns << endl;
		cout << "you have " << 20 - turns << "turn left." << endl;
		turns++;

		cout << "your health:" << endl << endl; 
		switch (room) {
		case 1:
			cout << "Your are in room 1. You can go North." << endl;
			cin >> input;
			if (input == "N")
				room = 2;
			if (input.compare("Pick up") == 0)
				inverntory[0] = "Sword";

			else
				cout << "Sorry, that's not an option!" << endl;
			break;
		case 2:
			cout << "You are now in room 2. You go South." << endl;
			monster(); 
			cin >> input;
			if (input == "S")
					room = 1;
			if (input.compare("pick up") == 0)
				inverntory[1] = "Map";
			else
					cout << "sorry, that is not an option!" << endl;
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
		cout << "the zombie hits you for 4 damage"
	}

	else if (num < 75) {
		cout << "a spider appears" << endl;
		health -= 2
		cout << "spider hits you for 2 damage"
	}
		else
			cout << "the room is UGLY." << endl; 
}
