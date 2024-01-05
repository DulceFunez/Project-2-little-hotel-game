#include <iostream>
#include <vector>
#include "functions.h"

int main() {
    int new_room = 0;
    int end = 0;
    int day = 1;
    int rooms_in_resort = 1;
    int rooms_full = 0;
    int resort_total = 0;
    int breakfast_cost = 0;
    int empty_rooms = 0;
    char exit;
    std::vector<RoomRenter> renter_resort;
    

    std::cout << "\"Starting Hotel Game\"" << "\nWelcome to Macaw Resort, this resort\n"
              << "is yours now and you get to manage it...\n";
   //---
   std::cin.ignore();
   while(end != 1) {
    std::cout << "Day = " << day << "\n";
    breakfast_cost = breakfast(renter_resort);
    std::cout << breakfast_cost << " people eating breakfast!";
    std::cout << "\nRooms Occupied = " << renter_resort.size() << "/" << rooms_in_resort;
    empty_rooms = EmptyRooms(renter_resort);
    std::cout << "\nRooms will be emptied = " << empty_rooms;
    std::cout << "\nGuest leaving...\n";
    std::cin.ignore();
    std::cout << "Rooms Occupied = " << renter_resort.size() << "/" << rooms_in_resort;
    std::cout << "\nNew Guest Arriving...";
    std::cin.ignore();
    rooms_full = renter_resort.size();
    int payment = 0;
    NewGuest(rooms_in_resort, rooms_full, renter_resort, payment);

   if (payment == 0) {
    std::cout << "No new guest :(";
   }

    std::cout << "\nRooms Occupied = " << renter_resort.size() << "/" << rooms_in_resort;
    std::cout << "\nTotal payment = $" << payment;
    std::cin.ignore();
    std::cout << "\n End of the day:";
    std::cout << "\nTotal Resort Money = " << resort_total;
    std::cout << "\n\nTotal Income = $" << payment;
    std::cout << "\nBreakfast expense = $-" << breakfast_cost * 10;
    std::cout << "\nCleaning Expenses = $-" << empty_rooms * 10;
    resort_total = resort_total + payment - (breakfast_cost * 10)
                   - (empty_rooms * 10);
    std::cout << "\nNew Total Resort Money = $" << resort_total;
    std::cin.ignore();
    std::cout << "Exit = 'E' , Add Room($300) = 'A', Continue = any other letter\n";
    std::cin >> exit;
    if(exit == 'E' || exit == 'e') {
      end = 1;
    } else if (exit == 'A' || exit == 'a'){
        std::cout << "\nHow many new rooms do you want?";
        std::cin >> new_room;
        rooms_in_resort += new_room;
        resort_total = resort_total - (new_room * 300);
        std::cout << "\nYou got a new room.";
        std::cout << "\nNew Total Resort money = $" << resort_total <<"\n";
        std::cin.ignore();
        
    } 
    std::cout << "\n";

    if (resort_total < 0) {
        end = 1;
    }
    day += 1;
   }
   std::cout << "\nEnd of game!!!\n";
    return 0;
}
