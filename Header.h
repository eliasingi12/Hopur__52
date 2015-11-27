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

struct person
{
    string name;
    bool gender;
    int birth_year;
    int year_of_death;
    
};

{
public:
    
    computer_sciecentst();
    void write_person();
    list <person> search_person(string s);
    void order_list();
    void names_asc();
    void names_dsc();
    virtual ~computer_sciecentst();
protected:
private:
    list<person> names;
    bool is_asc = true;
};



#endif
