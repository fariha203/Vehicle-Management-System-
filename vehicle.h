#ifndef vehicle_h
#define vehicle_h

#define MAX 100
#define size 50

typedef struct {
    char vehicleId[size];
    char vehicleType[size];
    char modelName[size];
    char brand[size];
    int year_of_manufacture;
    char engine_capacity[size];

}Vehicle;

extern Vehicle vehicles[MAX];
extern int vehicleCount;

int addVehicle();
void showVehicle();
int searchVehicle();
int updateVehicle();
int deleteVehicle();
int calculateServiceCost();



#endif