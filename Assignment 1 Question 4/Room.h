/*
 * Room.h
 *
 *  Created on: Feb 2, 2025
 *      Author: jiyongjeon
 */

#ifndef ROOM_H_
#define ROOM_H_

#include <iostream>
#include <string>

using namespace std;


// Room Class Definition
class Room {
private:
    int id;         // Unique ID of the room
    int capacity;   // Maximum capacity of the room

public:
    // Default Constructor: Initializes room with default values (ID = 0, Capacity = 0)
    Room();

    // Parameterized Constructor: Initializes room with given values
    Room(int roomId, int roomCapacity);

    // Getter for Room ID
    int getId() const;

    // Setter for Room ID
    void setId(int roomId);

    // Getter for Room Capacity
    int getCapacity() const;

    // Setter for Room Capacity
    void setCapacity(int roomCapacity);

    // Displays Room Information
    void displayRoom() const;
};


#endif /* ROOM_H_ */
