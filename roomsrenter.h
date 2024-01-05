#include <iostream>

class RoomRenter {
 public:
 RoomRenter(int people, int days_stay)
    :people_(people), days_stay_(days_stay) {}
 ~RoomRenter() {}

 int DaysStay() {
    return days_stay_;
 }
 int GetPeople() {
   return people_;
 }

 void SetDays() {
    days_stay_ = days_stay_ - 1;
 }

 private:
 int people_;
 int days_stay_;


};