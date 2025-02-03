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

    Room room1;
    cout << "Default Room:" << endl;
    room1.displayRoom();


    Room room2(101, 30);
    cout << "\nParameterized Room:" << endl;
    room2.displayRoom();


    cout << "\nUpdating Room 1 details:" << endl;
    room1.setId(202);
    room1.setCapacity(50);
    room1.displayRoom();

    return 0;
}

