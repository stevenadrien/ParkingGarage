//
//  Vehicle.h
//  ParkingGarage
//
//  Created by Steven on 16/07/18.
//  Copyright © 2018 Steven. All rights reserved.
//

#ifndef Vehicle_h
#define Vehicle_h


class Vehicle

{
private:
    string make;
    string plateNumber;
    
    
public:
    Vehicle(string mk, string plate)
    {
        make = mk;
        plateNumber = plate;
        
    }
    
    string getMake()
    {
        return make;
    }
    
    void setMake(string mk)
    {
        make = mk;
    }
    
    
    string getPlateNumber()
    {
        return plateNumber;
    }
    
    void setPlateNumber(string plate)
    {
        plateNumber = plate;
    }
    
    
    void inputVehicleInfo()
    {
        cout<<"Enter the make of the customer's vehicle:"<<endl;
        cin>>make;
        
        cout<<"Enter the plate number of the customer's vehicle:"<<endl;
        cin>>plateNumber;
        
    }
    
    

    
    
    
    
    
};








#endif /* Vehicle_h */
