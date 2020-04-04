#include "userinput.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv){
    UserInput *user = new UserInput();
    user->askUser();
    cout <<"Done"<<endl;
    
}