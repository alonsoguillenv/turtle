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
    //void draw_turtle(int);
    void draw_turtle();
    Turtle player_turtle;
    std::string get_name();
    int get_time();
    int get_wins();
private:

    unsigned int player_turns;
    std::string name;
    unsigned int player_time;

};


#endif // PLAYER_HPP
