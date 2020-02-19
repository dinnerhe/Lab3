#include "Renter.h"
Renter::Renter(){
    this->renter_id = 0;
    this->first_name = "";
    this->last_name = "";
}
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
bool Renter::operator < (const Renter & renter){
   if (first_name < renter.first_name)
      return true;
   
   if (first_name > renter.first_name)
      return false;
   
   if (last_name < renter.last_name)
      return true;
   
   if (last_name > renter.last_name)
      return false;
   
   if (renter_id < renter.renter_id)
      return true;
   
   return false;
}
