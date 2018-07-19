//
//  Vehicle.h
//  ParkingGarage
//
//  Created by Steven on 16/07/18.
//  Copyright © 2018 Steven. All rights reserved.
//

#ifndef Vehicle_h
#define Vehicle_h

//
//  Customer
//  ParkingGarage
//
//  Created by Steven on 16/07/18.
//  Copyright © 2018 Steven. All rights reserved.
//

class Vehicle
{
private:
    string make;
    string plateNumber;
    
    
public:
    Vehicle(string mk, string plate)
    {
        this.make = make;
        this.plateNumber = plate;
        
    }
    
    string getMake
    {
        return make;
    }
    
    string setMake(string mk)
    {
        make = mk;
    }
    
    
    string getPlateNumber
    {
        return plateNumber;
    }
    
    string setPlateNumber(string plate)
    {
        lastName = plate;
    }
    
    
    void inputVehicleInfo()
    {
        cout<<"Enter the make of the customer's vehicle:"<<endl;
        cin>>make;
        
        cout<<"Enter the plate number of the customer's vehicle:"<<endl;
        cin>>plateNumber;
        
    }
    
    

    
    
    
    
    
}



#endif /* Customer_h */






#endif /* Vehicle_h */
