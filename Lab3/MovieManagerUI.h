#ifndef MOVIEMANAGERUI_H_
#define MOVIEMANAGERUI_H_

#include "Movies.h"
class MovieManagerUI{
public:
    static void printMenu();
    static string getCommand();
    static string getMovieName();
    static string getMovieCode();
    static int getRenterID();
    static string getRenterFirstName();
    static string getRenterLastName();
    static void toUpper(string &);
};
#endif
