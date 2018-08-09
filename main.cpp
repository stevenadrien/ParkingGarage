using namespace std;


#include <iostream>
#include "ParkingGarage1.h"
#include <string>







int main()
{
    
    ParkingGarage parkingGarage;
    
    
    //TESTING
    //parkingGarage.testingCapacityBound();
    //parkingGarage.testingParkingCapabilities();
    //parkingGarage.testingEditCustomerInformationCapabilities();
    //parkingGarage.testingRenewParkingPass();
    //parkingGarage.testingUpdatePassPrices();
    //parkingGarage.testingDisplayOperationsAnalyticsCapability();
    //parkingGarage.testingDisplayBusinessAnalyticsCapability();
    
    
    
    
    
    int userChoice;
    
    string userLogin;
    
    cout<<"Welcome to the Parking Garage System."<<endl<<endl;
    
    bool validLogin;

    
    do
    {
        cout<<"Please type in your login password to gain access to the system:"<<endl;
    
        cin>>userLogin;
    
        if(userLogin == parkingGarage.getLogin())
        {
            cout<<"Login successful.  Welcome "<<parkingGarage.getAdminName()<<" :)"<<endl<<endl<<endl;
            validLogin = true;
            
        }
        
        if(userLogin != parkingGarage.getLogin())
        {
        	system("CLS");
			parkingGarage.didplayScreen();
            cout<<"Access denied, ";
            validLogin = false;
        }
    } while (validLogin == false);
    
    
    
    do
    {
    	system("CLS");
		 parkingGarage.didplayScreen();
        cout << "Please type in your desired action. Type in -1 to logout and exit the program:"<<endl<<endl;
        cout << "1. Park A Car"<<endl;
        cout << "2. Un-Park A Car"<<endl;
        cout << "3. Set Parking Pass Prices"<<endl;
        cout << "4. Display Operations Analytics"<<endl;
        cout << "5. Display Business Analytics"<<endl;
        cout << "6. Issue A New Parking Pass"<<endl;
        cout << "7. Renew A Parking Pass"<<endl;
        cout << "8. Edit Customer Info"<<endl;
        
        int customerID;
        
        bool validInput= false;
        do
        {
            cin>>userChoice;
	        if (cin.good())
	        {
		    		validInput = true;  
	        }
	        else
	        {
	            cin.clear();
	            cin.ignore(numeric_limits<streamsize>::max(),'\n');
	            system("CLS");
				parkingGarage.didplayScreen();
		        cout << "Please type in your desired action. Type in -1 to logout and exit the program:"<<endl<<endl;
		        cout << "1. Park A Car"<<endl;
		        cout << "2. Un-Park A Car"<<endl;
		        cout << "3. Set Parking Pass Prices"<<endl;
		        cout << "4. Display Operations Analytics"<<endl;
		        cout << "5. Display Business Analytics"<<endl;
		        cout << "6. Issue A New Parking Pass"<<endl;
		        cout << "7. Renew A Parking Pass"<<endl;
		        cout << "8. Edit Customer Info"<<endl;
	            cout << "Invalid input; Please type in your desired action. Type in -1 to logout and exit the program:" << endl;
	        }
	    } while (!validInput);
        
        switch(userChoice)
        {
                
            case 1:{
			
                cout<<"Please enter the customer ID of the person desiring to park their car: "<<endl;
                cin>>customerID;
                parkingGarage.parkACar(customerID);
                system("pause");
                break;    
           }
            case 2:
                cout<<"Please enter the customer ID of the person desiring to unpark their car: "<<endl;
                cin>>customerID;
                parkingGarage.unParkACar(customerID);
                system("pause");
                break;
                
            case 3:
                parkingGarage.setParkingPassPrices();
                system("pause");
                break;
                
                
            case 4:
                parkingGarage.displayOperationsAnalytics();
                system("pause");
                break;
                
                
            case 5:
                parkingGarage.displayBusinessAnalytics();
                system("pause");
                break;
                
                
            case 6:
                parkingGarage.addACustomer();
                break;
                
                
            case 7:
            	system("CLS");
				parkingGarage.didplayScreen();
                cout<<"Please enter the customer ID of the person desiring to renew their parking pass: "<<endl;
                cin>>customerID;
                parkingGarage.renewParkingPass(customerID);
                system("pause");
                break;
                
                
            case 8:
            	system("CLS");
				parkingGarage.didplayScreen();
                cout<<"Pleas enter the customer ID of the person desiring to edit their information: "<<endl;
                cin>>customerID;
                parkingGarage.editCustomerInfo(customerID);
        	}
        
        
    } while(userChoice != -1);
     
    
    
}



