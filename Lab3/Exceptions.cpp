#include <exception>
#include <string>
#include <iostream>
using namespace std;


class DuplicateMovieException:public exception{
public:
   const char* what() const throw(){
      return "Duplicate Movie Exception";
   }
};

class MovieLimitException:public exception{
public:
   const char* what() const throw(){
      return "MovieLimitException";
   }
};

class EmptyMovieInfoException:public exception{
public:
   const char* what() const throw(){
      return "EmptyMovieInfoException";
   }
};

class MovieNotFoundException:public exception{
public:
   const char* what() const throw(){
      return "MovieNotFoundException";
   }
};

class EmptyMovieListException:public exception{
public:
   const char* what() const throw(){
      return "EmptyMovieListException";
   }
};

class EmptyRenterListException:public exception{
public:
   const char* what() const throw(){
      return "EmptyRenterListException";
   }
};

class RenterLimitException:public exception{
public:
   const char* what() const throw(){
      return "RenterLimitException";
   }
};

class RenterNotFoundException: public exception{
public:
   const char* what() const throw(){
      return "RenterNotFoundException";
   }
};

class DuplicateRenterException:public exception{
public:
   const char* what() const throw(){
      return "DuplicateRenterException";
   }
};

class InvalidRenterIDException:public exception{
public:
   const char* what() const throw(){
      return "InvalidRenterIDException";
   }
};

class EmptyRenterNameException:public exception{
public:
   const char* what() const throw(){
      return "EmptyRenterNameException";
   }
};

class RentedMovieException:public exception{
public:
   const char* what() const throw(){
      return "RentedMovieException";
   }
};


