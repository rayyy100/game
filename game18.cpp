#include<iostream>
using namespace std;
void npc(); 
void monster(); 
void shop(); 
void battle(int MonsterHealth);
void NPC(int xy);
int health = 100; 
int money = 500; 
string inventory[10]; 
int main() {
	int room = 1;
	string input;
	int turns = 0;




	cout << "You wake up to find yourself in a cold icolated dungeon. Can you escape? Good luck!!!" << endl;

	do {
		cout << "It is turn " << turns << endl;
		cout << "you have " << 20 - turns << "turn left." << endl;
		turns++;
		
		cout << "your health:" << endl << endl; 
		cout << "you have " << money << " coins" << endl << endl; 
		switch (room) {
		case 1:
			cout << "Your are in room 1. You can go East." << endl;
			cin >> input;
			if (input == "E")
				room = 2;
			else if (input.compare("Pick up") == 0)
				inventory[0] = "Sword";

			else
				cout << "Sorry, that's not an option!" << endl;
			break;
		case 2:
			monster(); 
			cout << "You are now in room 2. You go South." << endl;
			monster(); 
			cin >> input;
			if (input == "S")
					room = 1;
			else if (input.compare("pick up") == 0)
				inventory[1] = "Map";
			else
				cout << "sorry, that is not an option!" << endl;
			break;
		case 3:
			cout << "You are now in room 2. You go East." << endl;
			monster();
			cin >> input;
			if (input == "E")
				room = 2;
			else if (input.compare("pick up") == 0)
				inventory[2] = "Bag";
			else
				cout << "sorry, that is not an option!" << endl;
			break;
		case 4:
			npc(); 
			cout << "You are now in room 2. You go East." << endl;
			monster();
			cin >> input;
			if (input == "E")
				room = 3;
			else if (input.compare("pick up") == 0)
				inventory[2] = "Food";
			else
				cout << "sorry, that is not an option!" << endl;
			break;
		case 5:
			cout << "You are now in room 2. You go South." << endl;
			monster();
			cin >> input;
			if (input == "S")
				room = 4;
			else if (input.compare("pick up") == 0)
				inventory[2] = "Water bottle";
			else
				cout << "sorry, that is not an option!" << endl;
			break;
		}


	} while (input != "q" && turns < 20 && health > 0);
	if (turns > 20)
		cout << "Thanks for playing! Game Over!" << endl;
}

void monster() {
	int num = rand() % 10 + 1;
	if (num < 20) {
		cout << "a skeleton appears" << endl;
		battle(40); 
	}
	else if (num < 50) {
		cout << "a zombie appears" << endl;
		battle(50);
	}

	else if (num < 75) {
		cout << "a spider appears" << endl;
		battle(30);
	}
		else
			cout << "the room is UGLY." << endl; 
}
void shop() {
	string input; 
	do {
		cout << "Hi, welcome to my shop!" << endl;
		cout << "Enter k for key ($30), p for potion($50), l for lamp($80)" << endl;
		cout << "q to quit" << endl;
		cin >> input;
		if (input == "k") {
			if (money > 30)
			inventory[0] = "key";
			cout << "you got a key!" << endl;
			money -= 30;
		}
		else if (input == "p") {
		    if (money > 50)
			inventory[1] = "potion";
			cout << "you got a potion!" << endl;
			money -= 50;
		}
		else if (input == "l") {
			if (money > 80)
			inventory[2] = "lamp";
			cout << "you got a lamp!" << endl;
			money -= 80;
		}
	} while (input != "q");
}

void battle(int MonsterHealth) {
	int damage;
	while (health > 0 && MonsterHealth > 0) {
		//the monster attacks
		if (inventory[6] == "shield") {
			damage = rand() % 10;
			cout << "your shield blocks some of the damage!" << endl; 
		}
		else {
		damage = rand() % 20;
		health -= damage;
		cout << "you tale full damage" << damage << "damge" << endl;

		//player attacks monster
		if (inventory[5] == "sword") {
			cout << "you slice the enemy with your sword!" << endl;
			damage = rand() % 50 + 20;
		}
		else {
			damage = rand() % 40;
			cout << "you hit the monster with your fist" << endl;
		}
		MonsterHealth -= damage;
		cout << "you hurt the monster for" << damage << "damage" << endl;
	}
	if (MonsterHealth <= 0) {
		cout << "you destroyed the monster" << endl;
	}
	else cout << "you died." << endl; 
}
	void NPC(int xy); {
		int num; 
		if (xy == 1) {
			cout << "you encountered a friendly squirrel." << endl;
			num = rand() % 3;
			if (num == 0)
				cout << "Hi, nice weather today!" << endl;
			else if (num == 1)
				cout << "i like your shoes!" << endl;
			else if (num == 2)
				cout << "Acorns are tasty!" << endl;
		}
		else if (xy == 2) {
			cout << "You found a helpful deer!" << endl;
			num = rand() % 3;
			if (num == 1)
				cout << "Hello! Its a lovely evening right!" << endl;
			else if (num == 1)
				cout << "I like the weather its nice! How about you?" << endl;
			else if (num == 2)
				cout << "I like your sweater!" << endl;
		}
		else (xy == 3); {
			cout << "a sleepy dog appeared!" << endl;
			num = rand() % 3;
			if (num == 2)
				cout << "Do you have a blanket?" << endl;
			else if (num == 1)
				cout << "How about a pillow?" << endl;
			else if (num == 2)
				cout << "Im really sleepy wanna go to sleep?" << endl; 
		}
	}
	
