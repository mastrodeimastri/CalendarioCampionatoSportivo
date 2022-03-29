#include <iostream>
#include "main.hpp"


//from the element of the squad vector, this function create e list of the squad randomly sorted
void Calendario :: sort()
{
    srand(time(NULL));
    
    // i create a deep copy of the vector squadreCampionato because i have to delete the sorted elements from the vector to make the program rum
    std::vector<squadra> c(squadreCampionato);
    int Codice;
    
    for(int i(0); i < 20; i++)
    {
        Codice = rand() % c.size();
        append(sorteggiati,c.at(Codice).codice);

        c.erase(c.begin() + Codice);
    }
}
//this function put the element of the list created before into a vector recursively
void Calendario :: sorteggi(list& SORT)
{
    if(SORT)
    {
        sorted.push_back(squadreCampionato.at(SORT->info));
        sorteggi(SORT->next);
    }


}