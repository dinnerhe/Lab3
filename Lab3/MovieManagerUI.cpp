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
        toUpper(command);
        if(command == "AM"|| command == "RM" || command == "RR"||command == "P" ||command == "Q"){valid = true;}
    }
    return command;
}

string MovieManagerUI::getMovieName(){
    string name;
    cout << "Enter the name of the movie: ";
    cin >> name;
    cout << "\n";
    return name;
}
string MovieManagerUI::getMovieCode(){
    string code;
     cout << "Enter the code of the movie: ";
    cin >> code;
    return code;
}
int MovieManagerUI::getRenterID(){
    int id;
     cout << "Enter RenterID: ";
    cin >> id;
    return id;
}
string MovieManagerUI::getRenterFirstName(){
    string fname;
     cout << "Enter the First Name of the renter: ";
    cin >> fname;
    return fname;
}
string MovieManagerUI::getRenterLastName(){
    string lname;
     cout << "Enter the Last Name of the renter: ";
    cin >> lname;
    return lname;
}
void MovieManagerUI::toUpper(string &command){
    for_each(command.begin(), command.end(), [](char & c){
        c = ::toupper(c);
    });
}
