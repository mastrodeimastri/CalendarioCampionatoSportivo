#ifndef SORT_H_
#define SORT_H_

#include <iostream>
#include "main.hpp"

struct code
{
    int info;
    code* next;
};

typedef code* list;

void prepend(list& t, int el);
void append(list& t, int el);    

void sort(list&,std::vector<squadra>);
void sorteggi(std::vector<squadra>&, list&);

#endif