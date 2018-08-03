#ifndef ParkingPass_h
#define ParkingPass_h

#include "ParkingGarage.h"
#include <ctime>
#include "Operations.h"
#include <time.h>
#include <chrono>






class ParkingPass
{
    
private:
    char parkingPassType;
    int parkingSpot;
    double duration;
    clock_t timer;
    std::chrono::time_point<std::chrono::system_clock> start, end;

   // Date dateCreated;
   // Date expirationDate;
    
    

    

    
public:
    
    
    ParkingPass()
    {
        start = std::chrono::system_clock::now();
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
    
    double getDuration()
    {
        return duration;
    }
    
    void setDuration(double dur)
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

    
    
    
    /*
     std::chrono::time_point<std::chrono::system_clock> start, end;
     
     start = std::chrono::system_clock::now();
     std::cout << "f(42) = " << fibonacci(42) << '\n';
     end = std::chrono::system_clock::now();
     
     std::chrono::duration<double> elapsed_seconds = end - start;
     std::time_t end_time = std::chrono::system_clock::to_time_t(end);
     
     std::cout << "finished computation at " << std::ctime(&end_time)
     << "elapsed time: " << elapsed_seconds.count() << "s\n";
     */
    
    bool isItExpired()
    {
        end = std::chrono::system_clock::now();
    
        std::chrono::duration<double> elapsed_seconds = end - start;
     
        if(elapsed_seconds.count() == duration || elapsed_seconds.count() > duration)
        {
            return true;
        }
        
        return false;
        
    }

    
    void renewParkingPass()
    {
        //Reset deh clock
        start = std::chrono::system_clock::now();
        
    }
    
    
    
};




#endif /* ParkingPass_h */
