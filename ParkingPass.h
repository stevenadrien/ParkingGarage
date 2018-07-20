//
//  ParkingPass.h
//  ParkingGarage
//
//  Created by Steven on 19/07/18.
//  Copyright © 2018 Steven. All rights reserved.
//

#ifndef ParkingPass_h
#define ParkingPass_h

class ParkingPass
{
    
private:
    char parkingPassType;
    int parkingSpot;
    
public:
    
    ParkingPass();
    
    char getParkingPassType()
    {
        return parkingPassType;
    }
    
    void setParkingPassType(char pass)
    {
        parkingPassType = pass;
    }
    
    int getParkingSpot()
    {
        return parkingSpot;
    }
    
    void setParkingSpot(int spotNumber)
    {
        parkingSpot = spotNumber;
    }
    
    
    void setParkingPassInfo()
    {
        cout<<"Enter parking pass type (p for premium, b for basic, d for day pass): "<<endl;
        cin>>parkingPassType;
        
        if(parkingPassType == 'p')
        {
            cout<<"Enter customer's reserved parking spot number (from 1-100): "<<endl;
            cin>>parkingSpot;
        }
        
    }
    
    
    
};


#endif /* ParkingPass_h */
