#include "functions.h"

void NewGuest(int rooms_in_resort, int rooms_full, std::vector<RoomRenter> &renters, int &payment) {
   int k = 1;

   int rooms_empty = rooms_in_resort - rooms_full;

   srand(time(NULL));
   int new_renters = rand() % (rooms_empty+1);

   for(int i = new_renters; i > 0; i--) {
    int people = rand() % 4 + 1;
    int stays = rand() % 3 + 1;
    RoomRenter guest(people, stays);
    renters.push_back(guest);
    
    std::cout << "Room " << k << " - " << people << " people - " << stays;
    if (stays == 1 ) {
        std::cout << " day\n";
    } else {
        std::cout << " days\n";
    }
    payment += (stays * 100);
    k++;
   }
}