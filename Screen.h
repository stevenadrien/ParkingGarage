#ifndef Screen_h
#define Screen_h

#include <iostream>
#include <iomanip>
#include <string>
#include<stdlib.h> 
using namespace std;


class Screen{ 
  private:  
    string spot[30];
    //setw(7)
    
  public: 
    Screen(){
    	for(int i = 0; i < 30; i++){
    		spot[i] = to_string(i);
		}
    }
    void displayScreen(int total, int premium, int basic, int day, int CustomerCount) const { 
    	system("CLS");
		cout<<endl<<"         Welcome to the Parking Garage System.                     "<<total<<" Cars in Garage:"<<endl<<endl
		<<" | "<<spot[0]<<"  | "<<spot[1]<<"  | "<<spot[2]<<"  | "<<spot[3]<<"  | "<<spot[4]<<"  | "<<spot[5]<<"  | "
		<<spot[6]<<"  | "<<spot[7]<<"  | "<<spot[8]<<"  | "<<spot[9]<<"  |                     PremiumPass holders: "<<premium<<endl
		
		<<" ---------------------------------------------------                     Basic Pass Holders: "<<basic<<endl
		<<" | "<<spot[10]<<" | "<<spot[11]<<" | "<<spot[12]<<" | "<<spot[13]<<" | "<<spot[14]<<" | "<<spot[15]<<" | "
		<<spot[16]<<" | "<<spot[17]<<" | "<<spot[18]<<" | "<<spot[19]<<" |                     DayPass holders:"<<day<<endl
		<<" --------------------------------------------------- "<<endl
		<<" | "<<spot[20]<<" | "<<spot[21]<<" | "<<spot[22]<<" | "<<spot[23]<<" | "<<spot[24]<<" | "<<spot[25]<<" | "
		<<spot[26]<<" | "<<spot[27]<<" | "<<spot[28]<<" | "<<spot[29]<<" | "<<endl
		<<" ---------------------------------------------------               " <<CustomerCount<<" Customer in the system"<<endl<<endl;
    }
    void updateScreen(int odldSpot, int aSpot, char passtype, char action ) { 
    	string mySpot = to_string(aSpot);
		if (aSpot<30 && aSpot >= 0)
		{
			if (action == 'p'){
				if(spot[aSpot] != "P"){
					if(spot[aSpot] != "R")
						spot[aSpot] = "P";
					else{
						if(passtype ='p')
							spot[aSpot] = "P";	
							
					}
				}
				else {
					cout<<"A car is parked in here"	<<endl;
				}
			}
			else if (action == 'u'){
				if(passtype== 'p')
					spot[aSpot] = "R";
				else
					spot[aSpot] = mySpot;
			}
			else if(action == 'r'){
				if(passtype == 'p'){
					spot[aSpot] = "R";
					if (odldSpot != -1)
					spot[odldSpot]	= to_string(odldSpot);
				}
			}
			else if(action == 'e')
				spot[odldSpot]	= to_string(odldSpot);
		}
	}
	int getEmptySpot(){
		for(int i= 0; i<30; i++ ){
			if(spot[i] == to_string(i))
			cout<<"Next Parking Spot Available: " <<i<<endl;
				return i;		
		}
		
	}

};
#endif 

