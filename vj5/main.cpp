#include <iostream>
#include "testboard.hpp"

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    Board b(x,y);
    b.display();

    Tocka a,z;
    a.x = 3;
    a.y = 3;
    z.y = 8;
    z.x = 8;

    b.draw_line(a,z);

    b.display() ;

    b.draw_char(a);
    b.display();

    b.draw_up_line(z);
    b.display();

    b.display();

    return 0;
}
