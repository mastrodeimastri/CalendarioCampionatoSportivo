#include <iostream>
#include "main.hpp"



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