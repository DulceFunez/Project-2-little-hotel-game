#include "functions.h"

int EmptyRooms(std::vector<RoomRenter> &renters) {
    int emptyrooms = 0;
    int i = 0;
    std::vector<int> erases;
  for(auto &renter : renters) {
    renter.SetDays();
    if (renter.DaysStay() == 0) {
       emptyrooms += 1;
       erases.push_back(i);
    }
    i++;
  }
  i = erases.size();
  while (i != 0) {
    
  renters.erase(renters.begin()+ (i-1));
  i--;
  }

 return emptyrooms;
}