#ifndef MOVIEMANAGER_H_
#define MOVIEMANAGER_H_

#include "MovieManagerUI.h"
class MovieManager{
private:
    int number_of_movie;
    Movies movie_array[20];
public:
    MovieManager();
    void run();
    void addMovie(Movies);
    void discontinueMovie(string);
    void rentMovie(string, Renter);
    void returnRental(int, string);
    void printInventory();
};
#endif
