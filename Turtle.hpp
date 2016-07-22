#ifndef TURTLE_HPP
#define TURTLE_HPP
#include <string>

class Turtle
{
public:
    Turtle();
    void draw();
    unsigned int index;
    int body[6];
    std::string print_body[6];
    int get_size();

private:

    unsigned int size;


};

#endif // TURTLE_HPP
