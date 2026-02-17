#include "fonction-bienvenue.h"
#include <iostream>
#include <sstream>  // pour convertir string -> int

int main(int argc, char* argv[])
{
    std::string message = "Bienvenue le monde !";
    int nbAffichage = 1;

    // Si l'utilisateur fournit le message
    if(argc >= 2)
        message = argv[1];

    // Si l'utilisateur fournit le nombre d'affichages
    if(argc >= 3)
    {
        std::istringstream iss(argv[2]);
        if(!(iss >> nbAffichage)) nbAffichage = 1; // fallback si conversion échoue
    }

    afficherBienvenue(message, nbAffichage);
    return 0;
}

