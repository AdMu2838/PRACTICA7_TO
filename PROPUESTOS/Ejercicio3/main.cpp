#include "Director.h"
#include "AutomovilBuilder.h"
#include <iostream>

int main()
{
    std::cout << "\n=== Sistema de Construccion de Automoviles ===\n"
              << std::endl;

    Director director;
    AutomovilBuilder builder;
    director.setBuilder(&builder);

    std::cout << "Construyendo automovil economico..." << std::endl;
    Automovil *economico = director.construirAutomovilEconomico();
    economico->mostrar();
    delete economico;

    std::cout << "\nConstruyendo automovil deportivo..." << std::endl;
    Automovil *deportivo = director.construirAutomovilDeportivo();
    deportivo->mostrar();
    delete deportivo;

    return 0;
}