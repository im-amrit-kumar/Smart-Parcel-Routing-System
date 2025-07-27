#include "parcel.h"
#include <iostream>
#include <fstream>

Parcel::Parcel(int id, int urgency, int destination) {
    this->id = id;
    this->urgency = urgency;
    this->destination = destination;
}

int Parcel::getId() const { return id; }
int Parcel::getUrgency() const { return urgency; }
int Parcel::getDestination() const { return destination; }

void Parcel::printParcel() const {
    cout << "Parcel ID: " << id << ", Urgency: " << urgency
         << ", Destination: " << destination << endl;
}

vector<Parcel> Parcel::loadParcels(const string &filename) {
    ifstream file(filename);
    vector<Parcel> parcels;
    int skip = 0, id, urgency, dest;
    while (file >> id >> urgency >> dest) {
        parcels.push_back(Parcel(id, urgency, dest));
    }
    return parcels;
}