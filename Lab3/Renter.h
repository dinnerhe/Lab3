#ifndef RENTER_H_
#define RENTER_H_

#include "Exceptions.cpp"
class Renter{
private:
    int renter_id;
    string first_name;
    string last_name;
public:
    Renter();
    Renter(int, string, string);
    int getRenterID();
    void setRenterID(int);
    string getRenterFirstName();
    void setRenterFirstName(string);
    string getRenterLastName();
    void setRenterLastName(string);
    bool operator < (const Renter &);
};
#endif
