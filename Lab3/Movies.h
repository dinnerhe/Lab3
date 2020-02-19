#ifndef MOVIES_H_
#define MOVIES_H_

#include "Renter.h"
class Movies{
private:
    string movie_code;
    string movie_name;
    int copy_number;
    Renter renters[20];
    void bubble_sort(Renter [], int);
public:
    Movies();
    Movies(string, string);
    string getMovieCode();
    string getMovieName();
    int getRentedCopies();
    void rentMovie(Renter);
    void returnRental(int);
    friend ostream& operator<<(ostream& os, Movies &);
};
#endif
