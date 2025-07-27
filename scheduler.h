#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include "parcel.h"
#include "truck.h"
using namespace std;

class Scheduler {
public:
    void assignParcelsToTrucks(vector<Parcel> &parcels, vector<Truck> &trucks);
};

#endif