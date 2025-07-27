#ifndef PARCEL_H
#define PARCEL_H

#include <vector>
#include <string>
using namespace std;

class Parcel {
private:
    int id;
    int urgency;
    int destination;

public:
    Parcel(int id, int urgency, int destination);
    int getId() const;
    int getUrgency() const;
    int getDestination() const;
    void printParcel() const;
    static vector<Parcel> loadParcels(const string &filename);
};

#endif