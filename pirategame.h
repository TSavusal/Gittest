<<<<<<< HEAD
#include <iostream>
#include <string>

int main(void) //tells a pirate story
{
	using std::cout;
	using std::cin;	
	using std::string;
	int buddies;
	int afterBattle;
	string exit;
	cout << "You are a pirate and are walking"
		<< " along in the crime filled \n"
		<< "city of Havana (in 1789). "
		<< "How many of your pirate buddies \n"
		<< "do you bring along? (Any number between 11 and 115)\n";

	//records the amount of friends you bring along
	cin >> buddies;
	//calculates the amount of pirates left after the battle
	afterBattle = (1 + buddies - 10);

	cout << "Suddenly 10 musketeers jump out "
		<< "from the local tavern and \n"
		<< "draw their swords. "
		<< "10 musketeers and 10 pirates die in the \n"
		<< "battle. There are only "
		<< (buddies + 1 - 10)
		<< " pirates left, including you.\n\n";

	cout << "The fallen drop a total of 600 gold coins.\n"
		<< "The bounty is split evenly, which works out to "
		<< (500 / afterBattle) << " gold coins \n"
		<< "for each survivors.\n";
	cout << "The last " << (107 % afterBattle) << " are fought over "
		<< "in a drunken brawl.\n";
	cout << "These last few coins are spent on more booze during the\n"
		<< "course of the brawl. In time everyone retires\n"
		<< "peacefully on the bar room floor.\n"
		<< "Another succesful day as a pirate!\n";
	return 0;
=======
#include <iostream>
#include <string>

int main(void) //tells a pirate story
{
	using std::cout;
	using std::cin;	
	using std::string;
	int buddies;
	int afterBattle;
	string exit;
	cout << "You are a pirate and are walking"
		<< " along in the crime filled \n"
		<< "city of Havana (in 1789). "
		<< "How many of your pirate buddies \n"
		<< "do you bring along? (Any number between 11 and 115)\n";

	//records the amount of friends you bring along
	cin >> buddies;
	//calculates the amount of pirates left after the battle
	afterBattle = (1 + buddies - 10);

	cout << "Suddenly 10 musketeers jump out "
		<< "from the local tavern and \n"
		<< "draw their swords. "
		<< "10 musketeers and 10 pirates die in the \n"
		<< "battle. There are only "
		<< (buddies + 1 - 10)
		<< " pirates left, including you.\n\n";

	cout << "The fallen drop a total of 500 gold coins.\n"
		<< "The bounty is split evenly, which works out to "
		<< (500 / afterBattle) << " gold coins \n"
		<< "for each survivors.\n";
	cout << "The last " << (107 % afterBattle) << " are fought over "
		<< "in a drunken brawl.\n";
	cout << "These last few coins are spent on more booze during the\n"
		<< "course of the brawl. Eventually everyone retires\n"
		<< "peacefully on the bar room floor.\n"
		<< "Another succesful day as a pirate!\n";
	return 0;
>>>>>>> branch_1
}