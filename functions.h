#include <iostream>
#include <vector>
#include <cstdlib>
#include "roomsrenter.h"

void resortdata(int const &day, int const &rooms__in_resort, int const &rooms_full, int const &resort_total);
int EmptyRooms(std::vector<RoomRenter> &renters);
void NewGuest(int rooms_in_resort, int rooms_full, std::vector<RoomRenter> &renters, int &payment);
int breakfast(std::vector<RoomRenter> &renters);