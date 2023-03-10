#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

// Structures (struct keyword)
// - A way of grouping related variables of any type into one place

// Creating a Structure
// Unamed Structures (Objects)
// 	- Unnamed structs object body are suffixed with a name
// 	- Unnamed structs are mutable objects with explicitly defined properties initalized as empty

// Named Structures (Intefaces / Types)
// 	- Named structs object body are prefixed with a name
// Named structs are Interfaces / Types

// Swap Name Function
// 	- Write a function in C++ that swaps someones names;

void swapName(string &fname, string &lname)
{
	string temp = fname;
	fname = lname;
	lname = temp;
}

// void callBack()

int main()
{
	// Suffixing the name of a struct creates an empty object of that shape
	struct
	{
		string fname;
		string lname;
	} hero;

	// Prefixing the name of a struct creates a data type
	struct Villain
	{
		string name;
		string show;
	};

	hero.fname = "Gon";
	hero.lname = "Freecss";

	Villain villain;
	villain.name = "Meruem";
	villain.show = "Hunter x Hunter";

	cout << "First Name: " << hero.fname << "\n"
		 << "Last Name: " << hero.lname << endl;

	cout << "Villain Name: " << villain.name << "\n"
		 << "Show: " << villain.show << endl;
	swapName(hero.fname, hero.lname);
	cout
		<< "First Name: " << hero.fname << "\n"
		<< "Last Name: " << hero.lname << endl;

	return 0;
}
