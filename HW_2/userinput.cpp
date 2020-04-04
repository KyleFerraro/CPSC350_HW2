#include <iostream>
#include <fstream>
#include "userinput.h"

using namespace std;

UserInput::UserInput(){
}

UserInput::~UserInput(){
}

void UserInput::askUser(){
    //asking the user to select their desired height, width and density
    cout << "Welcome to the game of life. Please enter:" << endl;
    get_file(input);
    cout << "Height: " << endl;
    cin >> height;
    cout << "Width: " << endl;
    cin >> width; 
    cout << "Choose the population density of the world:" << endl;
    cin >> density;
    board = new Board(height, width, density);
    askBoardType(boardArray);
}

void UserInput::askBoardType(int** someArray){
    char response;
    cout << "Choose a game mode: \n Classic \n Donut \n Mirror" << endl;
    cin >> response;
    if(response == "Classic" || response == "classic"){
        board = new Board(height, width);
        //going throgh generations of the board, up to 5 generations for the mode selected
        for(int i = 0; i<5; ++i){
            cout << "This is gen: " << i << endl;
            board->classic_mode(someArray, height, width);
        }
    }
    else if(response == "Donut" || response == "donut"){
        board = new Board(height, width);
        for(int i = 0; i<5; ++i){
            cout << "This is gen: " << i << endl;
            board->donut_mode(someArray, height, width);
        }
    }  
    else if(response == "Mirror" || response == "mirror"){
        board = new Board(height, width);
        for(int i = 0; i<5; ++i){
            cout << "This is gen: " << i << endl;
            board->mirror_mode(someArray, height, width);
        }
    }
    else {
        cout << "Invalid input" <<endl;
        return 0;
    }

}

void UserInput::get_file(){
    while (mFilename == ""){
        //prompt user to enter the name of the desired file
        cout << "Enter The File Name" << endl;
        string filename = "";
        cin >> filename;
        ifstream ifile;
        ifile.open(filename);
        if(ifile){
            mFilename = filename;
        }
    }
}