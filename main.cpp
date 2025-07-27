#include <iostream>
#include "graph.h"
#include "parcel.h"
#include "truck.h"
#include "scheduler.h"

using namespace std;

int main() {
    Graph g;
    g.loadGraph("input.txt");

    vector<Parcel> parcels = Parcel::loadParcels("input.txt");
    vector<Truck> trucks = {Truck(1, 3), Truck(2, 3)};

    Scheduler scheduler;
    scheduler.assignParcelsToTrucks(parcels, trucks);

    for (Truck &t : trucks) {
        t.printTruckParcels();
        g.dijkstra(0, t.getDestinations());
    }

    return 0;
}