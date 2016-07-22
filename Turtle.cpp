#include "Turtle.hpp"
#include <iostream>
#include <string>

Turtle::Turtle()
{
    body[0] = 2;
    body[1] = 5;
    body[2] = 1;
    body[3] = 1;
    body[4] = 1;
    body[5] = 1;

    print_body[0] = "CABEZA ";
    print_body[1] = "CUERPO ";
    print_body[2] = "PATA1 ";
    print_body[3] = "PATA2 ";
    print_body[4] = "PATA3 ";
    print_body[5] = "PATA4 ";

    index = 0;
    size = 6;
}


void Turtle::draw()
{
    int iter = 0;
    for( iter = 0; iter < index; iter += 1)
    {
        std::cout << print_body[iter];
    }
    std::cout << "\n";
    return;
}



int Turtle::get_size()
{

    return size;
}
