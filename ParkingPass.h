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
    Date dateCreated;
    Date expirationDate;
    
    
    
    

    
public:
    
    ParkingPass()
    {
        currentlyInGarage = false;
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
    
   
    
    
    
    
    //"Advanced" functions (related to customer issues; valid passes//setting parking spot info;; typically
    //essentially ties into some higher level function in a "parent" class
    
    void setParkingPassInfo()
    {
        while(bool flag = false)
        {
            cout<<"Enter parking pass type (p for premium, b for basic, d for day pass): "<<endl;
            cin>>parkingPassType;
        
            if(parkingPassType == 'p')
            {
                if(operations.getTotalPasses && operations.getTotalPremiumPassesLeft() != 0)
                {
                    int spot;
                    duration = "month";
                    cout<<"Enter customer's reserved parking spot number (from 1-100): "<<endl;
                    cin>>parkingSpot;
                    cout<<"Premium pass issued"<<endl;
                    flag = true;
                }
            
                else
                {
                    cout<<"No more premium passes available.  Please select another parking pass tier"<<endl;
                    setParkingPassInfo();
                }
        
                if(parkingPassType == 'b')
                {
                    if(operations.getTotalPasses && operations.getTotalBasicPassesLeft() != 0)
                    {
                        duration = "month";
                        cout<<"Basic pass issued"<<endl;
                        flag = true;
                    }
                    
                    else
                    {
                        cout<<"No more basic passes available.  Please select another parking pass tier"<<endl;
                        setParkingPassInfo();
                    }
                    
                    
                }
        
                if(parkingPassType == 'd')
                {
                    if(operations.getTotalPasses && operations.getTotalDayPassesLeft() != 0)
                    {
                        duration = "day";
                        cout<<"Day pass issued"<<endl;
                        flag = true;
                    }
                    
                    else
                    {
                        cout<<"No more day passes available.  Please select another parking pass tier"<<endl;
                        setParkingPassInfo();
                    }
                }

            }
    
    bool isItExpired()
    {
        if(getCurrentDate == expirationDate || getCurrentDate > expirationDate)
        {
            return true;
        }
        
    }
    
    
    
};


#endif /* ParkingPass_h */
