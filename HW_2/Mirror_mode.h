#include "Classic_mode.h"
#include <iostream>

class mirror_mode{
public:
    int height;
    int width;
    double desity;
    Board(height, width);
    Board(height, width, density);
    ~Board();
    void mirror_mode(grid);
    int** grid;
    int** newGen;
}