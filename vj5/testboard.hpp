
#include <iostream>
#include <vector>
#include <string>

using namespace std;

#ifndef TESTBOARD_H
#define TESTBOARD_H

typedef struct Tocka
{
    double x,y;
}Tocka;


class Board
{
private:
vector <string> board;

public:
    Board();
    Board(int,int);
    Board(const Board& b2){board = b2.board;};
    ~Board()
    {
        for (int i ; i < board.size() ; i++)
            board[i].clear();

        board.clear();
    };
    void draw_line(Tocka,Tocka);
    void draw_char(Tocka);
    void draw_up_line(Tocka);
    void display();
};



#endif // BOARD_H
