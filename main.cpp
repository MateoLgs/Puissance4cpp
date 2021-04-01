#include "Grille.cpp"
#include "Puissance_4.cpp"
#include <iostream>
#include <string>


int main(){

    bool partiegagnee = false;
    Puissance4 jeu = Puissance4();
    int numeroCase;

    
  


    while(!partiegagnee && !jeu.testeJeuNul()){

        jeu.afficheGrille();
        std::cin >> numeroCase;
        numeroCase-=1;
        jeu.ajouteSymbole(numeroCase%7,numeroCase/6);
        partiegagnee = jeu.testeVictoireDiagonale() || jeu.testeVictoireHorizontale() || jeu.testeVictoireVerticale();
        jeu.finTour();

    }

    
    
    return 0;
}