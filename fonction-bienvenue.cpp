#include "fonction-bienvenue.h"
#include <iostream>

void afficherBienvenue(std::string message, int nbAffichage)
{
    for(int i = 0; i < nbAffichage; i++)
    {
        std::cout << message << std::endl;
    }
}
