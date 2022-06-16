#ifndef _GATE_
#define _GATE_

#include "Point.h"

using namespace std;

#define UP 0
#define DOWN 1
#define RIGHT 2
#define LEFT 3

extern int g_command;

class Gate
{
private:
    const int dirTable[5][5]={
        {UP, RIGHT, LEFT, DOWN},
        {DOWN, LEFT, RIGHT, UP},
        {RIGHT, DOWN, UP, LEFT},
        {LEFT, UP, DOWN, RIGHT},
    };
    
public:
    int gate_num;
    
    bool passing_snake = false;
    pair<vector<int>, vector<int>> gate_directions;
    pair<Point, Point> gates;
    
    Gate(GameField &gf, const Point& gate1, const Point& gate2);
    
    ~Gate();

    vector<int> findExitRoute(GameField& gf, Point gate);
};

#endif
