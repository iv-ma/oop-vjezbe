#include "testboard.hpp"

Board::Board(int x, int y)
{
    for (int i = 0; i < y ; i++)
    {
        string temp;
        for (int j = 0 ; j < x ; j++)
        {
            if (i == 0 && j != 0 && j != (x-1))
                temp+='o';
            else if(i == (y-1) && j != 0 && j != (x-1))
                temp+='o';
            else if(j == 0 || j == (x-1))
                temp+='o';
            else
                temp+=' ';
        }
        board.push_back(temp);
    }
}

void Board::display()
{
    for (unsigned int z = 0 ; z < board.size()  ; z++)
        {
            cout<<board[z]<<"\n";
        }
}

void Board::draw_line(Tocka p1,Tocka p2)
{
    for (unsigned int i = 0; i < board.size() ; i++)
    {
        for (unsigned int j = 0 ; j < board.size() ; j++)
        {
            if(p1.x == i && p1.y == j)
            {
                board[j][i]='x';
                if (p1.x < p2.x)
                    p1.x++;
                if (p1.y < p2.y)
                    p1.y++;
            }
        }
        cout<<"\n";
    }
}

void Board::draw_char(Tocka p)
{
    string& pointer = board[p.y];
    pointer[p.x]='Z';
}

void Board::draw_up_line(Tocka p)
{
    int red = p.y;
    int stupac = p.x;
    while(red > 0)
    {
        //string pointer = board[red];
        board[red][stupac]='Z';
        red = red-1;
    }
}
