//============================================================================
// Name        : COEN244.cpp
// Author      : JY
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Write another class called Room, which represents class rooms. A room
//has an id (int), a capacity (int). Similar to Q1, Q2 and Q3, provide
//all the components of the class Room. In addition, you need to write a drive
//to test the class Room.


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
