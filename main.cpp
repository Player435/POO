int main() 
{
    
    Rectangle rect(10, 5);

    rect.afficher();

    rect.setLongueur(8);
    rect.setLargeur(4);
  
    std::cout << "\nAprès modification des dimensions:\n";
    rect.afficher();

    return 0;
}
