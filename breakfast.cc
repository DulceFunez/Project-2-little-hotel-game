#include "functions.h"

int breakfast(std::vector<RoomRenter> &renters) {
    int people = 0;
 for(auto renter : renters) {
   people += renter.GetPeople();
 }
 return people;

}