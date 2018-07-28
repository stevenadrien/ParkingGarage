using namespace std;


#include <iostream>
#include "ParkingGarage.h"


//fills garage- making sure
//add car (parked in the garage)
//remove car (left garage)
//edit customer info
//
//remove vehicle
//

int main()
{
    ParkingGarage parkingGarage;
    
    int userChoice;
    
    string userLogin;
    
    cout<<"Welcome to the Parking Garage System."<<endl;
    cout<<"Please type in your login password to gain access to the system"<<endl;
    
    cin>>userLogin;
    
    if(userLogin == parkingGarage.getLogin())
    {
        cout<<"Login successful.  Welcome "<<parkingGarage.getAdminName()<<" :)"<<endl<<endl<<endl;
    }
        
        
    
    do
    {
        cout << "Please type in your desired action. Type in -1 to logout and exit the program:"<<endl;
        cout << "1. Issue A New Parking Pass"<<endl;
        cout << "2. Renew A Parking Pass"<<endl;
        cout << "3. Set Parking Pass Prices"<<endl;
        cout << "4. Display Business Analytics"<<endl;
        
        cin >> userChoice;
        
    switch(userChoice)
        {
        
            case 1:
                parkingGarage.addACustomer();
                break;
        
            case 2:
                parkingGarage.renewParkingPass();
                break;
        
            case 3:
                parkingGarage.setParkingPassPrices();
                break;
        
            case 4:
                parkingGarage.displayBusinessAnalytics();
                break;
        }
    
        
    } while(userChoice != -1);
    
    
    
    
    
    
    
}


