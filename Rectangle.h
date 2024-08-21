#include <iostream>

class Rectangle
{
private:
    double longueur;
    double largeur;

public:
    Rectangle() ; 
    Rectangle(double L, double l) : longueur(L), largeur(l);
    ~Rectangle();
};
    
