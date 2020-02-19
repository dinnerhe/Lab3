#include "MovieManager.h"
MovieManager::MovieManager(){
    this->number_of_movie=0;
}
void MovieManager::run(){
    while(true){
    MovieManagerUI::printMenu();
    string command = MovieManagerUI::getCommand();
    if(command == "AM"){
        string m_name = MovieManagerUI::getMovieName();
        string m_code = MovieManagerUI::getMovieCode();
        Movies newMovie(m_code, m_name);
        addMovie(newMovie);
    }
    if(command == "DM"){}
    if(command == "RM"){
        string m_code = MovieManagerUI::getMovieCode();
        string fname = MovieManagerUI::getRenterFirstName();
        string lname = MovieManagerUI::getRenterLastName();
        int rid = MovieManagerUI::getRenterID();
        Renter newRenter(rid, fname, lname);
        
    }
    if(command == "RR"){}
        if(command == "P"){printInventory();}
        if(command=="Q"){break;}
    }
}
void MovieManager::addMovie(Movies m){
    this->movie_array[this->number_of_movie] = m;
    number_of_movie++;
}
void MovieManager::discontinueMovie(string movieCode){
    for(int i = 0; i < this->number_of_movie; i++){
    string buffer = this->movie_array[i].getMovieCode();
    if(buffer == movieCode){this->number_of_movie--;}
    }
}
void MovieManager::rentMovie(string movieCode, Renter r){
    for(int i = 0; i < this->number_of_movie; i++){
    string buffer = this->movie_array[i].getMovieCode();
        if(buffer == movieCode){
            movie_array[i].rentMovie(r);
        }
    }
}
void MovieManager::returnRental(int renterid, string movieCode){
    
}
void MovieManager::printInventory(){
    for(int i = 0; i < this->number_of_movie; i++){cout<< movie_array[i]<< endl;}
}
