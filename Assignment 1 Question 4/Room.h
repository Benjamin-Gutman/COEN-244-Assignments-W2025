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


class Room {
private:
    int id;
    int capacity;

public:

    Room();
    Room(int roomId, int roomCapacity);

    int getId() const;
    void setId(int roomId);

    int getCapacity() const;
    void setCapacity(int roomCapacity);

    void displayRoom() const;
};


#endif /* ROOM_H_ */
