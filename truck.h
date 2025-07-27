#ifndef TRUCK_H
#define TRUCK_H

#include <vector>
#include "parcel.h"
using namespace std;

class Truck {
private:
    int id;
    int capacity;
    vector<Parcel> parcels;

public:
    Truck(int id, int capacity);
    bool addParcel(const Parcel &p);
    void printTruckParcels() const;
    vector<int> getDestinations() const;
};

#endif