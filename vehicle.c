#include<stdio.h>
#include<string.h>
#include "vehicle.h"

Vehicle vehicles[MAX];
int vehicleCount = 0;

int uniqueId(char id[]){
    for(int i=0 ; i< vehicleCount ; i++)
    {
        if(strcmp(id,vehicles[i].vehicleId)==0)
        return 0;
    }
    return 1;
}

int addVehicle(){

    if(vehicleCount>= MAX)
    {
        printf("Vehicle list is full!\n");
        return 0;
    }

    char id[size];

    printf("Enter Vehicle id : ");
    scanf("%s",id);

    while(uniqueId(id)==0)
    {
        printf("Id already exists\n");
        printf("Enter Vehicle id : ");
        scanf("%s",id);
    }

    strcpy(vehicles[vehicleCount].vehicleId,id);

    printf("Enter vehicle type : ");
    scanf("%s",vehicles[vehicleCount].vehicleType);

    printf("Enter model name : ");
    scanf("%s",vehicles[vehicleCount].modelName);

    printf("Enter brand name : ");
    scanf("%s",vehicles[vehicleCount].brand);

    printf("Enter the year of manufacture : ");
    scanf("%d",&vehicles[vehicleCount].year_of_manufacture);

    printf("Enter engine capacity : ");
    scanf("%s",vehicles[vehicleCount].engine_capacity);

    printf("\nVehicle added successfullu!\n\n");

    vehicleCount++;
    return 1;
    
}

void showVehicle(){

    printf("______Showing vehicles______\n");
    for(int i=0 ; i<vehicleCount ; i++)
    {
        //printf("-------------------------\n");
        printf("vehicle %d\n",i+1);
        printf("-------------------------\n");
        printf("Vehicle id : %s\n",vehicles[i].vehicleId);
        printf("Vehicle type : %s\n",vehicles[i].vehicleType);
        printf("Vehicle model name : %s\n",vehicles[i].modelName);
        printf("Vehicle brand name : %s\n",vehicles[i].brand);
        printf("Year of manufacture : %d\n",vehicles[i].year_of_manufacture);
        printf("Engine capacity: %s\n",vehicles[i].engine_capacity);
        printf("-----------------\n");
    }
}

int searchVehicle(){
    int ch;
    printf("1. Search by id\n");
    printf("2. Search by vehicle type\n");
    printf("3. search by model name\n");
    printf("\nEnter options: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
        {
        char id[size];
        int temp=-1;

        printf("\nEnter id to search : ");
        scanf("%s",id);


        for(int i=0 ; i<vehicleCount ; i++)
        {
            if(strcmp(id,vehicles[i].vehicleId)==0)
            temp=i;
            break;
         }
        if(temp==-1)
        {
            printf("No such id found\n");
            return 0;
        }
            //printf("-------------------------\n");
            //printf("vehicle %d\n",temp+1);
            printf("-------------------------\n");
            printf("Vehicle id : %s\n",vehicles[temp].vehicleId);
            printf("Vehicle type : %s\n",vehicles[temp].vehicleType);
            printf("Vehicle model name : %s\n",vehicles[temp].modelName);
            printf("Vehicle brand name : %s\n",vehicles[temp].brand);
            printf("Year of manufacture : %d\n",vehicles[temp].year_of_manufacture);
            printf("Engine capacity: %s\n",vehicles[temp].engine_capacity);
            printf("\n-------------------------\n");

            return 1;
            break;
        }

        case 2:
        {
            char vtype[size];
            int vtycount=0;
            printf("Enter vehicle type to search: ");
            scanf("%s",vtype);

            for(int i=0; i<vehicleCount; i++)
            {
                if(strcmp(vtype,vehicles[i].vehicleType)==0)
                {
                    vtycount++;
                }
            }
            if(vtycount ==0)
            {
                printf("The type is not found\n");
                return 0;
            }

            int vType[vtycount];
            int j=0;
            for(int i=0; i<vehicleCount; i++)
            {
                if(strcmp(vtype,vehicles[i].vehicleType)==0)
                {
                   vType[j]=i;
                   j++;
                }
            }

            for(int i=0; i<vtycount; i++)
            {
                printf("-------------------------\n");
                printf("Vehicle %d\n",i+1);
                printf("-------------------------\n");
                printf("Vechile id : %s\n",vehicles[vType[i]].vehicleId);
                printf("Vehicle type : %s\n",vehicles[vType[i]].vehicleType);
                printf("Vehicle model name : %s\n",vehicles[vType[i]].modelName);
                printf("Vehicle brand name : %s\n",vehicles[vType[i]].brand);
                printf("Year of manufacture : %d\n",vehicles[vType[i]].year_of_manufacture);
                printf("Engine capacity: %s\n",vehicles[vType[i]].engine_capacity);
                printf("-------------------------\n");
            }
            break;
        }

        case 3:
        {
            char vmodel[size];
            int vmcount=0;
            printf("Enter vehicle model name to search: ");
            scanf("%s",vmodel);

            for(int i=0; i<vehicleCount; i++)
            {
                if(strcmp(vmodel,vehicles[i].modelName)==0)
                {
                    vmcount++;                  
                }
            }
            if(vmcount ==0)
            {
                printf("The type is not found\n");
                return 0;
            }

            int vModel[vmcount];
            int j=0;
            for(int i=0; i<vehicleCount; i++)
            {
                if(strcmp(vmodel,vehicles[i].modelName)==0)
                {
                   vModel[j]=i;
                   j++;
                }
            }

            for(int i=0; i<vmcount ; i++)
            {
                printf("-------------------------\n");
                printf("Vehicle %d\n",i+1);
                printf("-------------------------\n");
                printf("Vechile id : %s\n",vehicles[vModel[i]].vehicleId);
                printf("Vehicle type : %s\n",vehicles[vModel[i]].vehicleType);
                printf("Vehicle model name : %s\n",vehicles[vModel[i]].modelName);
                printf("Vehicle brand name : %s\n",vehicles[vModel[i]].brand);
                printf("Year of manufacture : %d\n",vehicles[vModel[i]].year_of_manufacture);
                printf("Engine capacity: %s\n",vehicles[vModel[i]].engine_capacity);
                printf("-------------------------\n");
            }
            break;

        }
    }


}

int updateVehicle(){
    char id[size];
    int tem=-1;

    printf("Enter id to update information : ");
    scanf("%s",id);

    for(int i=0; i< vehicleCount; i++)
    {
        if(strcmp(id,vehicles[i].vehicleId)==0)
        {
            tem=i;
            break;
        }
    }
    if(tem==-1)
    {
        printf("No such id found\n");
        return 0;
    }

    printf("Enter vehicle id : ");
    scanf("%s",vehicles[tem].vehicleId);

    printf("Enter vehicle type : ");
    scanf("%s",vehicles[tem].vehicleType);

    printf("Enter model name : ");
    scanf("%s",vehicles[tem].modelName);

    printf("Enter brand name : ");
    scanf("%s",vehicles[tem].brand);

    printf("Enter the year of manufacture : ");
    scanf("%d",&vehicles[tem].year_of_manufacture);

    printf("Enter engine capacity : ");
    scanf("%s",vehicles[tem].engine_capacity);

    printf("-------------------------\n");

    printf("Updated successfully\n\n");

}

int deleteVehicle(){
    char id[size];
    int tmp=-1;

    printf("Enter id to delete : ");
    scanf("%s",id);

    for(int i=0 ; i<vehicleCount ; i++)
    {
        if(strcmp(id,vehicles[i].vehicleId)==0)
        {
            tmp=i;
            break;
        }
    }
    if(tmp==-1)
    {
        printf("Id didn't matched!\n");
        return 0;
    }

    int j=0;
    Vehicle temVehicle[vehicleCount-1];
    for(int i=0 ; i<vehicleCount ; i++)
    {
        if(i==tmp)
        {
            continue;
        }
        strcpy(temVehicle[j].vehicleId,vehicles[i].vehicleId);
        strcpy(temVehicle[j].vehicleType,vehicles[i].vehicleType);
        strcpy(temVehicle[j].modelName,vehicles[i].modelName);
        strcpy(temVehicle[j].brand,vehicles[i].brand);
        temVehicle[j].year_of_manufacture = vehicles[i].year_of_manufacture;
        strcpy(temVehicle[j].engine_capacity,vehicles[i].engine_capacity);
        j++;

    }
    memset(vehicles, 0, sizeof(vehicles));
    memcpy(vehicles, temVehicle, sizeof(Vehicle) * j);
    vehicleCount -=1;

    printf("Target id removed successfully\n");

}