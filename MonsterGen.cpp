#include<iostream>
#include<Windows.h>
using namespace std;

void MonsterGen();

int main() {
	char input;
	while (1) {
		MonsterGen();
		cout << "Press any key to continue... " << endl;
		cin >> input;
	}

}

void MonsterGen() {
	int num = rand() % 100 + 1; //Creates a number between 1-100
	if (num < 15) //15% chance.
		cout << "A Witch stands before you. She has a small stand set up with a couple of potions and poisons on display." << endl;
	else if (num < 20) //5% chance.
1		cout << "A Young Werewolf is crouched ahead of you, it's trying to stay out of your line of sight." << endl;
	else if (num < 50) //30% chance.
		cout << "A Large Humanoidic Dragoness lies before you,\n She's fast asleep and clutching a skeleton who doesn't seem to like it one bit." << endl;
	else if (num < 75) //50% chance.
		cout << "A Skeleton is sitting down in front of you, he's wearing some rusted chainmail and a rotting tabbard, Behind him is a Large Humanoidic Dragnoness." << endl;
	else
		cout << "A Small pile of potatoes lies in the middle of the room, a Pug is eating a couple of them." << endl;
}
