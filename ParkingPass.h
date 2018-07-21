#ifndef ParkingPass_h
#define ParkingPass_h




class ParkingPass
{
    
private:
    char parkingPassType;
    int parkingSpot;
    

    
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
    
    
    void setParkingPassInfo()
    {
        cout<<"Enter parking pass type (p for premium, b for basic, d for day pass): "<<endl;
        cin>>parkingPassType;
        
        if(parkingPassType == 'p')
        {
            cout<<"Enter customer's reserved parking spot number (from 1-100): "<<endl;
            cin>>parkingSpot;
            cout<<"Premium pass issued"<<endl;
            
            
            
        }
        
        if(parkingPassType == 'b')
        {
            cout<<"Basic pass issued"<<endl;
            
        }
        
        if(parkingPassType == 'd')
        {
            cout<<"Day pass issued"<<endl;
            

        }
        
        
    }
    
    
    
};


#endif /* ParkingPass_h */
