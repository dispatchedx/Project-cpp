#ifndef ROOM_TYPE_A
#define ROOM_TYPE_A
//#include "pch.h" TODO
#include "Room.h"
class RoomTA : public Room {//capacity, pricePerson, pricePerDay
	private:
	double pricePerDay;
public:
RoomTA(int mCapacity, double pPrice, double pricePerDay) : Room(mCapacity, pPrice) {
	this->pricePerDay = pricePerDay;
}
RoomTA() {
}
		double pricing();
};
#endif