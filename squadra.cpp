#include <iostream>
#include <vector>
#include <ctime>
#include "squadra.hpp"


partita :: partita (int cod1, int cod2,std::vector<squadra>& campionato)
{
    squadra1 = &campionato.at(cod1);
    squadra2 = &campionato.at(cod2);
}


squadra :: squadra(int cod)         // COSTRUTTORE       
{
    codice  = cod;
    punteggio = 0;
    golFatti = 0;
    GolSubiti = 0;
    vittorie = 0;
    pareggi = 0;
    sconfitte = 0; 


}