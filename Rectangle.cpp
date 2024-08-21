#include <iostream>
#include "Rectangle.h"

    void setLongueur(double L) 
    {
        longueur = L;
    }

    void setLargeur(double l) {
        largeur = l;
    }

    double getLongueur() 
    {
        return longueur;
    }

    double getLargeur() 
    {
        return largeur;
    }

    double surface() 
    {
        return longueur * largeur;
    }

    double perimetre() 
    {
        return (longueur + largeur)*2;
    }

    
    void afficher() 
    {
        std::cout << "Longueur: " << longueur << std::endl;
        std::cout << "Largeur: " << largeur << std::endl;
        std::cout << "Surface: " << surface() << std::endl;
        std::cout << "Périmètre: " << perimetre() << std::endl;
    }
};
