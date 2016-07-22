#include "Player.hpp"

#include <iostream>
#include <ctime>


Player::Player():player_turtle(), player_turns(0), won_games(0), player_time(0)
{
}

int Player::take_turn()
{
    srand(time(0)*rand());
    bool finished = false;
    while( !finished )
    {
        srand(time(0)*rand());
        int value = 1 + rand()%6;
        player_time += 1;
        if( value == player_turtle.body[player_turtle.index] && player_turtle.index < player_turtle.get_size() )
        {
            player_turtle.index += 1;

        }
        else
        {
            if( player_turtle.index >= player_turtle.get_size() )
            {
                return player_turtle.index;
            }
            else
            {
                finished = true;
                return player_turtle.index;
            }
        }

    }

}


void Player::read_name()
{
    std::cin >> name ;

    return;
}


void Player::draw_turtle(int current_player )
{
    std::cout << " Tortuga de " << name << "=  " ;
    player_turtle.draw();
}



std::string Player::get_name()
{
    return name;

}

