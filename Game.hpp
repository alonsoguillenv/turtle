#ifndef GAME_HPP
#define GAME_HPP

#include "Player.hpp"

class Game
{
public:
    Game( int n, int level );
    void run();



private:
    int number_of_players;
    int game_level;
    int maximum_turtles;
    Player * players;
    bool finished;
    unsigned int rows;
    void save_game();
};

#endif //GAME_HPP
