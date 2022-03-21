#include <iostream>
#include "main.hpp"
#include "sort.hpp"

int findPos(std::vector<squadra>& campionato, int cod)
{
    bool isFound = false;
    for(int i(0);  i < campionato.size(); i++)
    {
        if(campionato.at(i).codice == cod)
        return i;
    }

    return -1;
}

void prepend(list& t, int el)
{   //questo metodo sopravvive anche alla morte dello scope
    list nuova;
    nuova = new code;
    nuova->info = el;
    nuova->next = t;
    t = nuova;
}

void append(list& t, int el)                  //Append fatta con metodo ricorsivo
{
    if(t == nullptr)
    prepend(t,el);
    else
    append(t->next, el);
    
}

void Calendario :: sort()
{
    srand(time(NULL));
    
    std::vector<squadra> c(squadreCampionato);
    int Codice;
    
    for(int i(0); i < 20; i++)
    {
        
        Codice = rand() % c.size();
        append(sorteggiati,c.at(Codice).codice);

        c.erase(c.begin() + Codice);
    }
}

void Calendario :: sorteggi(list& SORT)
{
    if(SORT)
    {
        sorted.push_back(squadreCampionato.at(SORT->info));
        sorteggi(SORT->next);
    }


}