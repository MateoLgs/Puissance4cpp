#ifndef PUISSANCE_4_CPP
#define PUISSANCE_4_CPP

#include "Grille.h"
#include "Puissance_4.h"
#include <iostream>


    Puissance4::Puissance4() : _symboleCourant('X'), _grilleDeJeu(7,6) {}

    void Puissance4::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Puissance4::ajouteSymbole(int x, int y=0){
        for(int i=0; i<6; i++){
            if (_grilleDeJeu.getContent(x,i)==' ')
            {
            y = i;
            }
        }
    
        _grilleDeJeu.setContent(x,y,_symboleCourant);
    }

    bool Puissance4::testeVictoireVerticale(){
        for(int i=0;i<7;i++){
            if((_grilleDeJeu.getContent(i,0)==_grilleDeJeu.getContent(i,1)
            && _grilleDeJeu.getContent(i,0)==_grilleDeJeu.getContent(i,2)
            && _grilleDeJeu.getContent(i,0)==_grilleDeJeu.getContent(i,3)
            && _grilleDeJeu.getContent(i,0)!=' ') || 
            (_grilleDeJeu.getContent(i,4)==_grilleDeJeu.getContent(i,1)
            && _grilleDeJeu.getContent(i,4)==_grilleDeJeu.getContent(i,2)
            && _grilleDeJeu.getContent(i,4)==_grilleDeJeu.getContent(i,3)
            && _grilleDeJeu.getContent(i,4)!=' ') || 
            (_grilleDeJeu.getContent(i,5)==_grilleDeJeu.getContent(i,2)
            && _grilleDeJeu.getContent(i,5)==_grilleDeJeu.getContent(i,3)
            && _grilleDeJeu.getContent(i,5)==_grilleDeJeu.getContent(i,4)
            && _grilleDeJeu.getContent(i,5)!=' '))
            {
                _grilleDeJeu.affiche();
                std::cout << "victoire " ;
                std::cout << _symboleCourant ;
                return true;
            }
        }
        return false;
    }

    bool Puissance4::testeVictoireHorizontale(){
        for(int i=0;i<6;i++){
            if((_grilleDeJeu.getContent(0,i)==_grilleDeJeu.getContent(1,i)
            && _grilleDeJeu.getContent(0,i)==_grilleDeJeu.getContent(2,i)
            && _grilleDeJeu.getContent(0,i)==_grilleDeJeu.getContent(3,i)
            && _grilleDeJeu.getContent(0,i)!=' ') || 
            (_grilleDeJeu.getContent(4,i)==_grilleDeJeu.getContent(1,i)
            && _grilleDeJeu.getContent(4,i)==_grilleDeJeu.getContent(2,i)
            && _grilleDeJeu.getContent(4,i)==_grilleDeJeu.getContent(3,i)
            && _grilleDeJeu.getContent(4,i)!=' ') || 
            (_grilleDeJeu.getContent(5,i)==_grilleDeJeu.getContent(2,i)
            && _grilleDeJeu.getContent(5,i)==_grilleDeJeu.getContent(3,i)
            && _grilleDeJeu.getContent(5,i)==_grilleDeJeu.getContent(4,i)
            && _grilleDeJeu.getContent(5,i)!=' ') || 
            (_grilleDeJeu.getContent(6,i)==_grilleDeJeu.getContent(3,i)
            && _grilleDeJeu.getContent(6,i)==_grilleDeJeu.getContent(4,i)
            && _grilleDeJeu.getContent(6,i)==_grilleDeJeu.getContent(5,i)
            && _grilleDeJeu.getContent(6,i)!=' '))
            {
                _grilleDeJeu.affiche();
                std::cout << "victoire " ;
                std::cout << _symboleCourant ;
                return true;
            }
        }
        return false;   
    }

    bool Puissance4::testeVictoireDiagonale(){

        for(int i=0; i<4; i++){
            for(int y=0; y<3; y++){
                if((_grilleDeJeu.getContent(y,i)==_grilleDeJeu.getContent(y+1,i+1)
            && _grilleDeJeu.getContent(y,i)==_grilleDeJeu.getContent(y+2,i+2)
            && _grilleDeJeu.getContent(y,i)==_grilleDeJeu.getContent(y+3,i+3)
            && _grilleDeJeu.getContent(y,i)!=' ') || (_grilleDeJeu.getContent(y+3,i)==_grilleDeJeu.getContent(y+2,i+1)
            && _grilleDeJeu.getContent(y+3,i)==_grilleDeJeu.getContent(y+1,i+2)
            && _grilleDeJeu.getContent(y+3,i)==_grilleDeJeu.getContent(y,i+3)
            && _grilleDeJeu.getContent(y+3,i)!=' ')){
                    _grilleDeJeu.affiche();
                    std::cout << "victoire " ;
                    std::cout << _symboleCourant ;
                    return true;
            }
            }
        }
        return false;
    }

    bool Puissance4::testeJeuNul(){
        if(_numeroTour==43){
            return true;
        }
        else{
        return false;
        }
        //return _numeroTour==10;
        }

    void Puissance4::finTour(){
        _symboleCourant=='X'?_symboleCourant='O':_symboleCourant='X';
        _numeroTour++;

   }

#endif