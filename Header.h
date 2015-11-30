//
//  Header.h
//  cmp_sci
//
//  Created by Elías Ingi Elíasson on 11/27/15.
//  Copyright (c) 2015 Elías Ingi Elíasson. All rights reserved.
//

#ifndef cmp_sci_Header_h
#define cmp_sci_Header_h


#include <string>
#include <list>
using namespace std;
struct person
{
	string name;
	string laast_name;
	char gender;
	int birth_year;
	int year_of_death;
	// over writing list.sort()
	bool operator <(const person& r_n);

};


class computer_sciecentst
{
public:

	computer_sciecentst();
	void write_person(string name, string laast_name, char gender, int birth_year, int year_of_death);
	list <person> search_person(string s);
	void order_list();
	void names_asc();
	void names_dsc();
	~computer_sciecentst();
protected:
private:
	list<person> names;
	bool is_asc = true;
};



#endif
