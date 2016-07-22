#include "Player.hpp"

#include <iostream>
#include <ctime>


Player::Player():player_turtle(), player_turns(0), won_games(0), player_time(0)
{
    won_games = 0;
}

int Player::take_turn()
{
    srand(time(0)*rand());
    bool finished = false;
    while( !finished )
    {
        srand(time(0)*rand());
        fflush(stdin);
        std::cout << "\nEs el turno de " << name << ". Presione Enter para lanzar el dado." << std::endl;
        getchar();
        //std::cout << "\n----" << name << " ha ganado " << this->won_games << " juegos ----" ;
        int value = 0;
        value = 1 + rand()%6;
        std::cout << "\n" << name << " obtuvo " << value <<" con el dado";
        player_time += 1;

        if( value == player_turtle.body[player_turtle.index] && player_turtle.index < player_turtle.get_size() )
        {
            player_turtle.index += 1;
        }
        else
        {
            if( player_turtle.index >= player_turtle.get_size() )
            {
                won_games+= 1;
                finished = true;
            }
            else
            {
                finished = true;

            }
        }
        draw_turtle();
    }
    player_turns += 1;
    return player_turtle.index;
}


void Player::read_name()
{
    std::cin >> name ;

    return;
}


void Player::draw_turtle(  )
{
    std::cout << "\nTortuga de " << name << "=  " ;
    player_turtle.draw();
}



std::string Player::get_name()
{
    return name;

}


int Player::get_time()
{
    return player_time;
}



int Player::get_wins()
{
    return won_games;
}

