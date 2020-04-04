#include "Board.h"
#include <iostream>

class UserInput{
public:
    UserInput();
    ~UserInput();
    void askUser();
    void askBoardType(int** someArray);
    void get_file(int i);=
    Board *board;
    int** boardArray = 0;
    int height;
    int width;
    double density;
}