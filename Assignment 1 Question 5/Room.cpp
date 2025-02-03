//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

#include <iostream>
#include "Room.h"

using namespace std;

Room::Room() {
    id = 0;
    capacity = 0;
}

Room::Room(int roomId, int roomCapacity) {
    id = roomId;
    capacity = roomCapacity;
}

int Room::getId() const {
    return id;
}

void Room::setId(int roomId) {
    id = roomId;
}

int Room::getCapacity() const {
    return capacity;
}

void Room::setCapacity(int roomCapacity) {
    capacity = roomCapacity;
}

void Room::displayRoom() const {
    cout << "Room ID: " << id << ", Capacity: " << capacity << endl;
}
