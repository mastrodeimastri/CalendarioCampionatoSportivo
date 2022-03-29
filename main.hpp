#ifndef MAIN_H_
#define MAIN_H_

#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include "squadra.hpp"

#define     N_GIORNATE          19





class Calendario
{
    private:

        struct code
        {
            int info;
            code* next;
        };

        typedef code* list;

        void prepend(list& , int );
        void append(list& , int );    
        void copyVector();
        
        std::vector <squadra> squadreCampionato;
        std::vector <squadra> sorted;
        std::vector <partita> gironeDiAndata[N_GIORNATE];
        std::vector <partita> gironeDiRitorno[N_GIORNATE];
        std::vector <std::string> nomiSquadre;
        list sorteggiati;

        void sorteggi(list&);
        void sort();
    
    public:
        Calendario();
        void SetNames();
        void printCalendario();
        void costruzioneCalendario();
        void ritorno();
};

void randomSort(std::vector <squadra>&);


    


#endif