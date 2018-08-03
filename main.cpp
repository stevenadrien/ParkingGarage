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
        cout << "1. Park A Car"<<endl;
        cout << "2. Un-Park A Car"<<endl;
        cout << "3. Set Parking Pass Prices"<<endl;
        cout << "4. Display Operations Analytics"<<endl;
        cout << "5. Display Business Analytics"<<endl;
        cout << "6. Issue A New Parking Pass"<<endl;
        cout << "7. Renew A Parking Pass"<<endl;
        cout << "8. Edit Customer Info"<<endl;
        
        cin >> userChoice;
        int customerID;

        
    switch(userChoice)
        {
        
            case 1:
                cout<<"Please enter the customer ID of the person desiring to park their car: "<<endl;
                cin>>customerID;
                parkingGarage.parkACar(customerID);
                break;
                
        
            case 2:
                cout<<"Please enter the customer ID of the person desiring to park their car: "<<endl;
                cin>>customerID;
                parkingGarage.unParkACar(customerID);
                
            case 3:
                parkingGarage.setParkingPassPrices();
                break;
        
                
            case 4:
                parkingGarage.displayOperationsAnalytics();
                break;
 
                
            case 5:
                parkingGarage.displayBusinessAnalytics();
                break;
                
                
            case 6:
                parkingGarage.addACustomer();
                break;
            
                
            case 7:
                cout<<"Please enter the customer ID of the person desiring to renew their parking pass: "<<endl;
                cin>>customerID;
                
                parkingGarage.renewParkingPass(customerID);
                break;
                
                
            case 8:
                cout<<"Pleas enter the customer ID of the person desiring to edit their information: "<<endl;
                cin>>customerID;
                parkingGarage.editCustomerInfo(customerID);
                
        }
    
        
    } while(userChoice != -1);
    
    /*
    
    string fName, lName, pNumber;
    parkingGarage.addACustomer();
    
    Customer customer1;
    
    customer1.setFirstName("harry");
    customer1.setLastName("potter");
    customer1.setPhoneNumber("4052491328");
    customer1.setParkingPassType('p');
    
    
    parkingGarage.parkACar(customer1);
    
    parkingGarage.displayOperationsAnalytics();
    
    
    
    parkingGarage.addACustomer(customer1);
     */
    
    
    
    
    
}


