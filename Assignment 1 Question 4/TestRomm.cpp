/*
 * TestRomm.cpp
 *
 *  Created on: Feb 2, 2025
 *      Author: jiyongjeon
 */


#include <iostream>
#include <string>
#include "Room.h"

using namespace std;


int main() {
    // Test Data
    int roomId = 101;
    int roomCapacity = 30;

    // Creating Room objects: one with default constructor and one with parameterized constructor
    Room room1;
    Room room2(roomId, roomCapacity);

    // Testing setId() and getId() for room1
    room1.setId(roomId);
    if (room1.getId() == roomId) {
        cout << "ID test passed" << endl;
    }

    // Testing setCapacity() and getCapacity() for room1
    room1.setCapacity(roomCapacity);
    if (room1.getCapacity() == roomCapacity) {
        cout << "Capacity test passed" << endl;
    }

    // Testing parameterized constructor for room2
    if (room2.getId() == roomId) {
        cout << "ID test passed" << endl;
    }

    if (room2.getCapacity() == roomCapacity) {
        cout << "Capacity test passed" << endl;
    }

    // Displaying Room Information
    room1.displayRoom();
    room2.displayRoom();

    return 0;
}

