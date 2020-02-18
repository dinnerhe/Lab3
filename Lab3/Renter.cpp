#include "Renter.h"
Renter::Renter(int rid, string rfname, string rlname){
    this->renter_id = rid;
    this->first_name = rfname;
    this->last_name = rlname;
}
int Renter::getRenterID(){
    return this->renter_id;
}
void Renter::setRenterID(int id){
    this->renter_id = id;
}
string Renter::getRenterFirstName(){
    return this->first_name;
}
void Renter::setRenterFirstName(string fname){
    this->first_name = fname;
}
string Renter::getRenterLastName(){return this->last_name;}
void Renter::setRenterLastName(string lname){this->last_name = lname;}
