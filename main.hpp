#ifndef MAIN_H_
#define MAIN_H_

#include <iostream>
#include <vector>
#include <ctime>
#include "squadra.hpp"
#include "sort.hpp"

#define     N_GIORNATE          19





class Calendario
{
    private:
        std::vector <squadra> squadreCampionato;
        std::vector <squadra> sorted;
        std::vector <partita> gironeDiAndata[N_GIORNATE];
        list sorteggiati;

    void sorteggi(list&);
    void sort();
    
    public:
        Calendario();
        void printCalendario(int);
        void costruzioneCalendario();

};

void randomSort(std::vector <squadra>&);


    


#endif