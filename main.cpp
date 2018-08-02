using namespace std;


#include <iostream>
#include "ParkingGarage.h"
#include <string>


//fills garage- making sure;;
//park car (parked in the garage);;;parkACar(int customerID)
//unpark car (left garage);;;unParkACar(int customerID)
//edit customer info
//renew parking pass
//update pass prices
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
                int customerID;
                cout<<"Please enter the customer ID of the person desiring to renew their parking pass: "<<endl;
                cin>>customerID;
                
                parkingGarage.renewParkingPass(customerID);
                break;
        
            case 3:
                parkingGarage.showCurrentPassPrices();
                break;
        
            case 4:
                parkingGarage.displayBusinessAnalytics();
                break;
        }
    
        
    } while(userChoice != -1);
    
    
    
    string fName, lName, pNumber;
    parkingGarage.addACustomer();
    
    Customer customer1;
    
    customer1.setFirstName("harry");
    customer1.setLastName("potter");
    customer1.setPhoneNumber("4052491328");
    customer1.setParkingPassType('p');
    
    
    parkingGarage.parkACar(customer1);
    
    parkingGarage.displayOperationsInformation();
    
    
    
    parkingGarage.addACustomer(customer1);
    
    
    
    
    
}


