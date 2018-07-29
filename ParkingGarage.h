#ifndef ParkingPass_h
#define ParkingPass_h

#include "ParkingGarage.h"
#include <ctime>




class ParkingPass
{
    
private:
    char parkingPassType;
    int parkingSpot;
    string duration;
    Date dateCreated;
    Date expirationDate;
    
    
    

    
public:
    
    ParkingPass()
    {
        
    }
    
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
    
    string getDuration()
    {
        return duration;
    }
    
    void setDuration(string dur)
    {
        duration = dur;
    }
    
    
    
    
    
    void setParkingPassInfo()
    {
        cout<<"Enter parking pass type (p for premium, b for basic, d for day pass): "<<endl;
        cin>>parkingPassType;
        
        if(parkingPassType == 'p')
        {
            duration = "month";
            cout<<"Enter customer's reserved parking spot number (from 1-100): "<<endl;
            cin>>parkingSpot;
            cout<<"Premium pass issued"<<endl;
        }
        
        if(parkingPassType == 'b')
        {
            duration = "month";
            cout<<"Basic pass issued"<<endl;
        }
        
        if(parkingPassType == 'd')
        {
            duration = "day";
            cout<<"Day pass issued"<<endl;
        }
        
        
    }
    
    bool isExpired()
    {
        if(getCurrentDate == expirationDate || getCurrentDate > expirationDate)
        {
            return true;
        }
        
    }
    
    
    
};


#endif /* ParkingPass_h */
