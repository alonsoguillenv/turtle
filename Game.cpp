#include "Game.hpp"
#include "Player.hpp"
#include <iostream>


Game::Game(int n, int level): game_level(level), number_of_players(n), finished(false), maximum_turtles(0), rows(0)
{
    players  = new Player[number_of_players];
    int iter = 0;
    do
    {
        std::cout << "\nIngrese el nombre del jugador " << iter << ":  " ;
        players[iter].read_name();
        iter += 1;
    }while( iter < number_of_players );

}


void Game::run()
{
    int current_player = 0;
    int games_number = 0;
    int maximum = -1;
    int winner = -1;
    while( maximum_turtles < game_level )
    {
        current_player = 0;
        while( !finished )
        {
            for( current_player = 0; current_player < number_of_players && !finished ; current_player += 1 )
            {
                int play = players[current_player].take_turn();
                if( play >= players[current_player].player_turtle.get_size()  )
                {
                    players[current_player].won_games += 1;
                    finished = true;

                }
                players[current_player].draw_turtle( current_player );

            }
            rows += 1;
        }
        save_game();



        for( int i = 0; i < number_of_players; i += 1 )
        {
            if( players[i].won_games > maximum )
            {
                maximum = players[i].won_games;
                winner = i;
            }
        }
        finished = false;
        maximum_turtles = maximum;
        fflush(stdin);
        std::cout << std::endl;
        std::cout << "\nStatus del juego: ";
        for( int i = 0; i < number_of_players; i += 1 )
        {
            std::cout << "\n" << players[i].get_name() << " ha completado " << players[i].won_games << " tortugas.";
        }
        if( maximum_turtles !=  game_level - 1)
        {
            std::cout << "\nPresione una tecla para continuar con la siguiente ronda!  " << std::endl;
        }
        else
        {
            std::cout << "\nFin del juego!";
        }
        for( int i = 0; i < number_of_players; i += 1 )
        {
            players[i].player_turtle.index = 0;

        }
        getchar();
    }


}



void Game::save_game()
{

    std::cout << "\nJuego guardado ";

    return;
}

