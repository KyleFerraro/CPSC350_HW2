#include <iostream>

class Board{
public:
    int height; 
    int width;
    int** grid;
    int** newGen;
    double desity;
    Board(height, width);
    Board(height, width, density);
    ~Board();
    int** classic_mode(grid, height, width);
    int** updateBoard(grid);
}