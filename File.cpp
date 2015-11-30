#include "cmp_sci.h"
#include <string>
using namespace std;
#include <list>
#include <iostream>     
#include <fstream>
#include <algorithm>

// over writing list.sort()
bool person::operator< (const person& r_n)
{
	if (laast_name == r_n.laast_name)
		return name < r_n.name;
	return laast_name < r_n.laast_name;
}

computer_sciecentst::computer_sciecentst()
{
	person sciecentst;

	ifstream file;
	file.open("person.txt");

	string name = "";
	string laast_name = "";
	char gender = ' ';
	int birth_year = 0;
	int year_of_death = 0;
	// read line by line
	while (file >> name >> laast_name >> gender >> birth_year >> year_of_death)
	{
		sciecentst.name = name;
		sciecentst.laast_name = laast_name;
		sciecentst.gender = gender;
		sciecentst.birth_year = birth_year;
		sciecentst.year_of_death = year_of_death;
		names.push_back(sciecentst);
	}
	file.close();

	order_list();

	list<person>::iterator i;
	for (i = names.begin(); i != names.end(); i++)
		cout << i->name << " " << i->laast_name << endl;

}

void computer_sciecentst::names_asc()
{
	if (!is_asc)
	{
		names.reverse();
		is_asc = false;
	}

	list<person>::iterator i;
	for (i = names.begin(); i != names.end(); i++)
		cout << i->name << " " << i->laast_name << endl;

}

void computer_sciecentst::names_dsc()
{
	if (is_asc)
	{
		names.reverse();
		is_asc = true;
	}

	list<person>::iterator i;
	for (i = names.begin(); i != names.end(); i++)
		cout << i->name << " " << i->laast_name << endl;

}

void computer_sciecentst::order_list()
{
	names.sort();
}

void computer_sciecentst::write_person(string name, string laast_name, char gender, int birth_year, int year_of_death)
{
	std::ofstream file;

	file.open("person.txt", std::ios_base::app);
	// append to file
	file << "\n" << name << " " << laast_name << " " << gender << " " << birth_year << " " << year_of_death;
	file.close();

	person sciecentst;

	sciecentst.name = name;
	sciecentst.laast_name = laast_name;
	sciecentst.gender = gender;
	sciecentst.birth_year = birth_year;
	sciecentst.year_of_death = year_of_death;
	
	names.push_back(sciecentst);
}



computer_sciecentst::~computer_sciecentst()
{
	names.clear();
}

