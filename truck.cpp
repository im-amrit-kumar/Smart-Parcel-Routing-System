#include "truck.h"
#include <iostream>
#include <set>

Truck::Truck(int id, int capacity) {
    this->id = id;
    this->capacity = capacity;
}

bool Truck::addParcel(const Parcel &p) {
    if ((int)parcels.size() >= capacity) return false;
    parcels.push_back(p);
    return true;
}

void Truck::printTruckParcels() const {
    cout << "\n🚚 Truck " << id << " Parcels:\n";
    for (const Parcel &p : parcels) {
        p.printParcel();
    }
}

vector<int> Truck::getDestinations() const {
    set<int> dests;
    for (const Parcel &p : parcels) dests.insert(p.getDestination());
    return vector<int>(dests.begin(), dests.end());
}