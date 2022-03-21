#ifndef SQUADRA_H_
#define SQUADRA_H_

#include <iostream>
#include <vector>


struct cod
{
    int cod1;
    int cod2;
};

struct squadra
{
    squadra();                          // COSTRUTTORE DI DEFAULT
    squadra(int);                       // COSTRUTTORE

    int codice;
    int punteggio;
    int golFatti;
    int GolSubiti;
    int vittorie;
    int sconfitte;
    int pareggi;
};

struct partita
{
    partita(int,int,std::vector<squadra>&);                   // COSTRUTTORE 

    squadra* squadra1;
    squadra* squadra2;

};




#endif