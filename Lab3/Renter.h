#ifndef RENTER_H_
#define RENTER_H_

#include "Exceptions.cpp"
class Renter{
private:
    int renter_id;
    string first_name;
    string last_name;
public:
    int getid();
    void setid(int);
    string getfirst();
    void setfirst(string);
    string getlast();
    void setlast(string);
    
};
#endif
