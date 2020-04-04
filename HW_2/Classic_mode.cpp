#include "Classic_mode.h"
#include <iostream>

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




int** Board::classic_mode(grid, height, width){
    int h = height;
    int w = width;
    double d = density;
    int numNeighbors;

    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            int x = i;
            int y = j;

            //origin
            if(x==0 && y==0){
                numNeighbors = grid[x][y+1] + grid[x+1][y] + grid[x+1][y+1];
            }
            //one down from origin
            else if (x==0 && y==w-1){
                numNeighbors = grid[x+1][y] + grid[x][y-1] + grid[x+1][y-1];
            }
            //one up from origin
            else if (x==0 && y==w+1){
                numNeighbors = grid[x+1][y] + grid[x][y-1] + grid[x+1][y-1];
            }
            //one left from origin
            else if (x==h-1 && y==0){
                numNeighbors = grid[x][y+1] + grid[x-1][y] + grid[x-1][y+1];
            }
            //one right from origin
            else if (x==h+1 && y==0){
                numNeighbors = grid[x-1][y] + grid[x][y-1] + grid[x-1][y-1];
            }
            //one right and one up from origin
            else if (x = h+1 && y==w+1){
                numNeighbors = grid[x-1][y] + grid[x-1][y+1] + grid[x][y+1] + grid[x+1][y];
            }
            //one right and one down from origin
            else if (x = h+1 && y==w-1){
                numNeighbors = grid[x+1][y] + grid[x+1][y-1] + grid[x][y-1] + grid[x-1][y-1];
            }
            //one left and one down from origin
            else if (x== h-1 && y = w-1){
                numNeighbors = grid[x][y-1] + grid[x+1][y-1] + grid[x+1][y] + grid [x+1][y+1];
            }
            //one left and one up from origin
            else if (x== h-1 && y = w+1){
                numNeighbors = grid[x][y-1] + grid[x+1][y-1] + grid[x+1][y] + grid [x+1][y+1];
            }

        }
    }

    int **newGen = new int*[h];
    for(int i=0; i<w; i++){
        newGen[i] = newint[h];
    }

    for(int i=0; i<j; ++i){
        for(int j=0; j<w; ++j){
            if(numNeighbors == 3){
                if(numNeighbors == 2) {
                    if(grid[i][j] == 1){
                        newGen[i][j] = 1;
                    }
                    else if(grid[i][j] == 0) {
                        newGen[i][j] = 0;
                    }
                }
                else if (numNeighbors >= 4 || numNeighbors <= 1){
                    newGen[i][j] = 0;
                }
                else if(grid[i][j] == 1 || grid[i][j] == 0)){
                    newGen[i][j] == 1;
                }
            }
        }
    }
}



