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

                    finished = true;

                }
            }
            rows += 1;
        }




        for( int i = 0; i < number_of_players; i += 1 )
        {
            if( players[i].get_wins()> maximum )
            {
                maximum = players[i].get_wins();
                winner = i;
            }
        }
        finished = false;
        std::cout << std::endl;
        maximum_turtles = maximum;
        //fflush(stdin);
        std::cout << "\nStatus del juego: ";
        for( int i = 0; i < number_of_players; i += 1 )
        {
            int wins = players[i].get_wins();
            std::cout << "\n" << players[i].get_name() << " ha completado " << wins << " tortugas.";
        }
        for( int i = 0; i < number_of_players; i += 1 )
        {
            int player_t = players[i].get_time();
            std::cout << "\n" << players[i].get_name() << " ha jugado " << player_t << " veces en total.";
        }
        if( maximum_turtles <  game_level)
        {
            std::cout << "\nPresione una tecla para continuar con la siguiente ronda!  " << std::endl;

        }
        else
        {
            std::cout << "\n\nFin del juego. Presione Enter para terminar. " << std::endl;
        }
        for( int i = 0; i < number_of_players; i += 1 )
        {
            players[i].player_turtle.index = 0;

        }
        save_game();
        getchar();
    }

    delete [] players;
}



void Game::save_game()
{

    std::cout << "\nJuego guardado ";
    //delete [] players;
    return;
}

