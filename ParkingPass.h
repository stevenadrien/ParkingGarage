#ifndef ParkingPass_h
#define ParkingPass_h

#include "ParkingGarage.h"
#include <ctime>
#include "Operations.h"




class ParkingPass
{
    
private:
    char parkingPassType;
    int parkingSpot;
    string duration;
   // Date dateCreated;
   // Date expirationDate;
    
    
    
    

    
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
    
    
    
    //functions to do stuff manually (like passing parking pass data for testing purposes ;))
    void setParkingPassData(char parkingType)
    {
        setParkingPassData(parkingType);
    }
    
    void setParkingPassData(char parkingType, int parkingSpot)
    {
        setParkingPassData(parkingType);
        setParkingSpot(parkingSpot);
    }
    
    
    
    
    
    //"Advanced" functions (related to customer issues; valid passes//setting parking spot info;; typically
    //essentially ties into some higher level function in a "parent" class

    
   /* bool isItExpired()
    {
        if(getCurrentDate == expirationDate || getCurrentDate > expirationDate)
        {
            return true;
        }
        
    }
    */
    
    
};


#endif /* ParkingPass_h */
