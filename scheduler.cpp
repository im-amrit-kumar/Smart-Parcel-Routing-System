#include "scheduler.h"
#include <algorithm>

void Scheduler::assignParcelsToTrucks(vector<Parcel> &parcels, vector<Truck> &trucks) {
    sort(parcels.begin(), parcels.end(), [](Parcel &a, Parcel &b) {
        return a.getUrgency() > b.getUrgency();
    });

    int t = 0;
    for (Parcel &p : parcels) {
        if (trucks[t].addParcel(p)) continue;
        t = (t + 1) % trucks.size();
        trucks[t].addParcel(p);
    }
}