//in questo progetto crerò un programma che simula il calendario e tutte le partite di serie A
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include "main.hpp"


cod calendarioGiornate[19][10] = {
{ // 1 ^ g
    {0,1},{2,3},{4,5},{6,7},{8,9},{10,11},{12,13},{14,15},{16,17},{18,19}},
{ // 2 ^ g
    {5,16},{3,12},{13,0},{19,2},{15,4},{11,8},{7,14},{1,10},{9,18},{17,6}},
{ // 3 ^ g
    {16,11},{2,5},{18,7},{14,1},{12,9},{10,3},{8,19},{6,15},{4,13},{0,17}},
{ // 4 ^ g
    {15,16},{3,4},{5,8},{11,2},{7,10},{9,0},{17,18},{13,14},{1,6},{19,12}},
{ // 5 ^ g
    {10,17},{6,5},{16,8},{13,3},{0,11},{12,7},{14,19},{2,9},{18,15},{4,1}},
{ // 6 ^ g
    {3,7},{5,14},{15,19},{11,18},{8,2},{1,13},{9,6},{4,10},{17,12},{0,16}},
{ // 7 ^ g
    {2,4},{18,0},{19,11},{14,9},{7,17},{12,5},{10,8},{1,3},{6,16},{13,15}},
{ // 8 ^ g
    {2,18},{16,10},{5,13},{15,7},{8,12},{9,1},{6,3},{4,11},{17,19},{0,14}},
{ // 9 ^ g
    {7,5},{3,17},{12,16},{10,15},{13,6},{19,0},{1,2},{18,4},{14,8},{11,9}},
{ // 10 ^ g
    {2,10},{16,18},{5,11},{15,3},{7,13},{8,4},{9,19},{6,14},{17,1},{0,12}},
{ // 11 ^ g
    {3,5},{19,7},{14,2},{11,13},{12,18},{10,6},{8,0},{1,15},{4,16},{17,9}},
{ // 12 ^ g
    {3,14},{18,8},{16,2},{5,10},{15,9},{7,1},{12,11},{6,19},{0,4},{13,17}},
{ // 13 ^ g
    {2,0},{19,1},{16,13},{5,18},{11,3},{10,12},{8,15},{9,7},{4,6},{17,14}},
{ // 14 ^ g
    {3,19},{18,10},{14,11},{15,17},{7,16},{12,4},{1,8},{6,2},{0,5},{13,9}},
{ // 15 ^ g
    {2,12},{9,3},{8,7},{10,0},{11,6},{5,15},{16,14},{19,13},{18,1},{4,17}},
{ // 16 ^ g
    {3,0},{19,5},{14,10},{15,12},{7,11},{1,16},{9,4},{6,8},{17,2},{13,18}},
{ // 17 ^ g
    {2,13},{18,14},{16,9},{5,17},{11,15},{12,1},{10,19},{8,3},{4,7},{0,6}},
{ // 18 ^ g
    {3,16},{19,4},{14,12},{15,2},{7,0},{1,11},{9,5},{6,18},{17,8},{13,10}},
{ // 19 ^ g
    {0,15},{18,3},{16,19},{5,1},{11,17},{12,6},{10,9},{8,13},{4,14},{2,7}}

};

void Calendario :: prepend(list& t, int el)
{   //questo metodo sopravvive anche alla morte dello scope
    list nuova;
    nuova = new code;
    nuova->info = el;
    nuova->next = t;
    t = nuova;
}

void Calendario :: append(list& t, int el)                  //Append fatta con metodo ricorsivo
{
    if(t == nullptr)
    prepend(t,el);
    else
    append(t->next, el);
    
}

void Calendario :: costruzioneCalendario()
{

   sort();

   sorteggi(sorteggiati);

   for(int i(0); i < 19; i++)
   {
       for(int j(0); j < 10; j++)
       {
           gironeDiAndata[i].push_back(partita(calendarioGiornate[i][j].cod1,calendarioGiornate[i][j].cod2, sorted));
       }         
   }
}

Calendario :: Calendario ()         // COSTRUTTORE CLASSE
{
    srand(time(NULL));

    sorteggiati = nullptr;
    //INIZIALIZZAZIONE SQUADRE
    for(int i(0); i < 20; i++)
    {
        /*
         * 
         * Utilizzo del costruttore definito in squadra.hhp per creare un nuovo elemento all'interno del vettore che poi 
         * andrà a contenere tutte le squadre facenti parte del campionato.
         *
         */ 
        squadreCampionato.push_back(squadra(i)); 
    }

    // costruzione delle varie giornate
    costruzioneCalendario();


}

void Calendario::printCalendario(int giornata)
{
    for(int i(0); i < 10; i++)
    {
        std::cout<< gironeDiAndata[giornata].at(i).squadra1->codice << " vs " << gironeDiAndata[giornata].at(i).squadra2->codice << std::endl;
    }
}

int main()
{
    Calendario serieA;

    serieA.printCalendario(0);

    return 0;
}
