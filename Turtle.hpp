#ifndef TURTLE_HPP
#define TURTLE_HPP

class Turtle
{
public:
    Turtle();
    void draw();
    unsigned int index;
    int body[6];
    int get_size();

private:

    unsigned int size;


};

#endif // TURTLE_HPP
