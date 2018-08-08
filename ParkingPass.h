
//
//  ParkingPass.h
//  ParkingGarage
//
//  Created by Steven Ouandji on 26/07/18.
//  Copyright © 2018 Steven Ouandji. All rights reserved.
//



/*
 This class is responsible for the attributes that deal with a customer's parking pass; things like
 --getting and setting the parking pass type
 --getting and setting the duration of time that a parking pass is valid for
 --getting and setting the parking spot, if we're dealing with a premium parking pass customer
 
 
 Most relevant functions are:
 
 -bool isItExpired(int customerID); which receives the customer's ID and checks if their parking pass is still valid (based on the duration value set by its respective parking pass tier)
 
 -void renewParkingPass(); which simply sets the starting time (or date of creation, if you want to think of it like that) of a parking pass to now.
 */


#ifndef ParkingPass_h
#define ParkingPass_h

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
        setParkingPassType(parkingType);
    }
    
    void setParkingPassData(char parkingType, int parkingSpot)
    {
        setParkingPassType(parkingType);
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
    
        
        auto time_elapsed = std::chrono::duration_cast<std::chrono::seconds>(end - start)/10;
        
        cout<<"Time elapsed since parking pass creation: "<<time_elapsed.count()<<" seconds"<<endl;
     
        if(time_elapsed.count() == duration || time_elapsed.count() > duration)
        {
            cout<<"Pass no longer valid :("<<endl<<endl;
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
