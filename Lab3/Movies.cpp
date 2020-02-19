#include "Movies.h"
Movies::Movies(){
    this->movie_name = "DEFAULT";
    this->movie_code = "";
    this->copy_number = 0;
}
Movies::Movies(string mid, string mname){
    this->movie_name = mname;
    this->movie_code = mid;
    this->copy_number = 0;
}
string Movies::getMovieCode(){
    return this->movie_code;
}
string Movies::getMovieName(){
    return this->movie_name;
}
int Movies::getRentedCopies(){
    return this->copy_number;
}
void Movies::rentMovie(Renter newRenter){
    this->renters[this->copy_number] = newRenter;
    bubble_sort(this->renters, copy_number+1);
    this->copy_number++;
}
void Movies::returnRental(int rid){
    bool found = false;
    try
    {
        for(int i = 0; i < this->copy_number; i++){
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
    movieinfo += "The following is renter information:\n";
    for(int i = 0; i < amovie.copy_number; i++){
        movieinfo += "Renter Name: ";
        movieinfo += amovie.renters[i].getRenterFirstName();
        movieinfo += " ";
        movieinfo += amovie.renters[i].getRenterLastName();
        movieinfo += " RenterID: ";
        movieinfo += amovie.renters[i].getRenterID();
        movieinfo += "\n";
    }
    os0<< movieinfo;
    return os0;
}
void Movies::bubble_sort(Renter renters[], int size){
   for (int i = 0; i < size; i++) {
      for (int j = i + 1; j < size; j++) {
         if (renters[j] < renters[i]) {
            Renter temp = renters[j];
            renters[j] = renters[i];
            renters[i] = temp;
         }
      }
   }
}
