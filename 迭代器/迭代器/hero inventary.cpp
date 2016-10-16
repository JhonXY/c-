
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string>inventary;
	inventary.push_back("sword");
	inventary.push_back("armor");
	inventary.push_back("shield");
	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;
	cout << "You items:\n";
	for (iter = inventary.begin(); iter != inventary.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "\nYou trade your sword for a battle axe.";
	myIterator = inventary.begin();
	*myIterator = "battle axe";
	cout << "\nYour iteams:\n";
	for (iter = inventary.begin(); iter != inventary.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "\nThe item name '" << *myIterator << "'has ";
	cout << (*myIterator).size() << " gletters in it.\n";
	cout << "\nThe item name '" << *myIterator << "'has ";
	cout << myIterator->size() << " letters in it.\n";
	cout << "\nYou recover a crossboow from a slain enemy.";
	inventary.insert(inventary.begin(), "crossbow");
	cout << "\nYou items:\n";
	for (iter = inventary.begin(); iter != inventary.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "\nYour armor is destroyed in a fierce battle.";
	inventary.erase((inventary.begin() + 2));
	cout << "\nYour items:\n";
	for (iter = inventary.begin(); iter != inventary.end(); ++iter)
	{
		cout << *iter << endl;
	}
	system("pause");
	return 0;
}