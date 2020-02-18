#include "MovieManagerUI.h"
void MovieManagerUI::printMenu(){
    cout <<"Welcome to Movie Rental Kiosk!"<<endl;
    cout<< "----------"<<endl;
    cout<< "am: Add Movie"<<endl;
    cout<< "dm: Discontinue Movie"<<endl;
    cout<< "rm: Rent Movie"<<endl;
    cout<<"rr: Return Rental"<<endl;
    cout<<"p: Print Movie Inventory"<<endl;
    cout<<"q: Quit Program"<<endl;
    cout<<"----------"<<endl;
    cout<<"Enter Command:"<<endl;
}
string MovieManagerUI::getCommand(){
    string command;
    bool valid = false;
    while(not valid){
        cin >> command;
        if(command == "am"|| command == "rm" || command == "rr"||command == "p" ||command == "q"){valid = true;}
    }
    return command;
}

string MovieManagerUI::getMovieName(){
    string name;
    
    cin >> name;
    return name;
}
int getMovieCode();
int getRenterID();
