#include "Classic_mode.h"
#include <iostream>

class donut_mode{
public:
    int height;
    int width;
    double desity;
    Board(height, width);
    Board(height, width, density);
    ~Board();
    void donut_mode(grid);
    int** grid;
    int** newGen;
}