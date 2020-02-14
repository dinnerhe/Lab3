#include "Renter.h"
int Renter::getid(){
    return this->renter_id;
}
void Renter::setid(int id){
    this->renter_id = id;
}
string Renter::getfirst(){
    return this->first_name;
}
void Renter::setfirst(string fname){
    this->first_name = fname;
}
string Renter::getlast(){return this->last_name;}
void Renter::setlast(string lname){this->last_name = lname;}
