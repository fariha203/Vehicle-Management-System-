#include<stdio.h>
#include<string.h>
#include "vehicle.h"

int main(){

    int choice;

    while(1){
        printf("||===============================||\n");
        printf("||   Vehicle Management System   ||\n");
        printf("||===============================||\n\n");

        printf("1. Add new vehicle \n");
        printf("2. Show all vehicle \n");
        printf("3. Search for a vehicle \n");
        printf("4. Update vehicle information \n");
        printf("5. Delete a vehicle \n");
        printf("6. Exit \n\n");
        
        printf("Enter choice : ");
        scanf("%d",&choice);


        switch (choice){
            case 1:
            addVehicle();
            break;

            case 2:
            showVehicle();
            break;

            case 3:
            searchVehicle();
            break;

            case 4:
            updateVehicle();
            break;

            case 5:
            deleteVehicle();
            break;

            case 6:
            printf("---Exiting the program---\n");
            return 0;

            default:
            printf("Invalid choice\n");

        }
    }

}