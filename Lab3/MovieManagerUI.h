#ifndef MOVIEMANAGERUI_H_
#define MOVIEMANAGERUI_H_

#include "Movies.h"
class MovieManagerUI{
public:
    void printMenu();
    string getCommand();
    string getMovieName();
    int getMovieCode();
    int getRenterID();
    string getRenterFirstName();
    string getRenterLastName();
    void toUpper(string);
};
#endif
