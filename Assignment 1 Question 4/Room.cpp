//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

#include <iostream>
#include "Room.h"

using namespace std;

// Default Constructor: Initializes room ID and capacity to 0
Room::Room() {
    id = 0;
    capacity = 0;
}

// Parameterized Constructor: Initializes room ID and capacity with provided values
Room::Room(int roomId, int roomCapacity) {
    id = roomId;
    capacity = roomCapacity;
}

// Getter for Room ID
int Room::getId() const {
    return id;
}

// Setter for Room ID
void Room::setId(int roomId) {
    id = roomId;
}

// Getter for Room Capacity
int Room::getCapacity() const {
    return capacity;
}

// Setter for Room Capacity
void Room::setCapacity(int roomCapacity) {
    capacity = roomCapacity;
}

// Displays Room Information
void Room::displayRoom() const {
    cout << "Room ID: " << id << ", Capacity: " << capacity << endl;
}
