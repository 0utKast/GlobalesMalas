// GlobalesMalas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int g_mode; // declaramos variable global (inicializada a cero predeterminado)

void hacerAlgo()
{
    g_mode = 2; // configura la variable global g_mode a 2
}

int main()
{
    g_mode = 1; // ¡nota: esto configura la variable global g_mode a 1.  
                // no declara una variable local g_mode!

    hacerAlgo();

    // El programador espera que g_mode aún sea 1
    // ¡Pero hacerAlgo lo cambió a 2!

    if (g_mode == 1)
        std::cout << "No se ha detectado amenaza.\n";
    else
        std::cout << "Lanzar los misiles nucleares...\n";

    return 0;
}