#include "Movies.h"
Movies::Movies(){
    this->movie_name = "DEFAULT";
    this->movie_code = 0;
}
Movies::Movies(int mid, string mname){
    this->movie_name = mname;
    this->movie_code = mid;
}
int Movies::getMovieCode(){
    return this->movie_code;
}
string Movies::getMovieName(){
    return this->movie_name;
}
int Movies::getRentedCopies(){
    return this->copy_number;
}
void Movies::rentMovie(Renter newRenter){
    this->copy_number++;
    this->renters[this->copy_number] = newRenter;
}
void Movies::returnRental(int rid){
    bool found = false;
    try
    {
        for(int i = 0; i == this->copy_number; i++){
            int buffer = this->renters[i].getRenterID();
            if(buffer == rid){
                this->copy_number--;
                found = true;
            }
        }
        if(not found){throw RenterNotFoundException();}
    }
    catch(RenterNotFoundException &e){
        cout<<"Can't find renter!"<<endl;
    }
}
ostream& operator<<(ostream& os0, Movies &amovie){
    string movieinfo = "";
    movieinfo += "Movie Name: ";
    movieinfo += amovie.getMovieName();
    movieinfo += "\n";
    movieinfo += "Movie Code: ";
    movieinfo += amovie.getMovieCode();
    movieinfo += "\n";
    os0<< movieinfo;
    return os0;
}
