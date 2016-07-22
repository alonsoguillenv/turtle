#include "Game.hpp"
#include "Turtle.hpp"

#include <iostream>


int main()
{
    int n = 0; //numero de jugadores
    int level = 0; //nivel de juego
    do
    {
        std::cout << "\nIngrese numero de jugadores ( mayor que  1 ):  ";
        std::cin >> n;
    }while( n <= 1 );

    do
    {
        std::cout << "\nIngrese el nivel de juego ( 1, 2 o 3 ):  ";
        std::cin >> level;
    }while( level < 1 || level > 3 );

    Game game(n, level);
    game.run();
    return 0;
}
