#include "Turtle.hpp"
#include <iostream>

Turtle::Turtle()
{
    body[0] = 2;
    body[1] = 5;
    body[2] = 1;
    body[3] = 1;
    body[4] = 1;
    body[5] = 1;

    index = 0;
    size = 6;
}


void Turtle::draw()
{
    int iter = 0;
    for( iter = 0; iter < index; iter += 1)
    {
        std::cout << body[iter];
    }
    std::cout << "\n";
    return;
}



int Turtle::get_size()
{

    return size;
}
