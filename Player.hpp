#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Turtle.hpp"
#include <string>

class Player
{
public:
    Player();
    int take_turn();
    void read_name();
    int won_games;
    void draw_turtle(int);
    Turtle player_turtle;
    std::string get_name();
private:

    unsigned int player_turns;
    std::string name;
    unsigned int player_time;

};


#endif // PLAYER_HPP
