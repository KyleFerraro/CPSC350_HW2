#include "Mirror_mode.h"

using namespace std;

//constructor
Board::Board(){
}

//destructor
Board::~Board(){  
    }

Board::Board(height, width){
    this->height = height;
    this->width = width;
}

Board::Board(height, width, density) {
    this->height = height;
    this->width = width;
    this->density = density;
}

void Board::mirror_mode(int** grid){
    int numNeighbors;
    int h = height;
    int w = weight;

    for(int i = 0; i<h; ++i){
        for(int j = 0; j<w; ++j){
            if(numNeighbors == 3){
                if(grid[i][j] = 1){
                    newGen[i][j] = 1;
                }

                else if(grid[i][j] == 0){
                    newGen[i][j] = 0;
                }
            }
            else if(numNeighbors >= 4){
                newGen[i][j] = 0;
            }
            else if(numNeighbors == 2 || numNeighbors == 1 || numNeighbors == 0 ){
                    newGen[i][j] = 0;
            }
        }
    }
}

