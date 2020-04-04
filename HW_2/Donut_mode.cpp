#include "Donut_mode.h"

void Board::donut_mode(int **grid){
    int numNeighbors;
    int h = height;
    int w = width;

    for(int i = 0; i<h; ++i){
        for(int j=0; j<w; ++j){
            if(numNeighbors == 3){
            }
            else if(grid[i][j] == 0 || grid[i][j] == 1 || grid[i][j] == 2){
                newGen[i][j] = 1;
            }
            else if(numNeighbors >= 4 || numNeighbors <= 1){
                newGen[i][j] = 0;
            }
        }
    }
}
