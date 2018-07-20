//
//  Employee.h
//  ParkingGarage
//
//  Created by Steven on 17/07/18.
//  Copyright © 2018 Steven. All rights reserved.
//

#ifndef Employee_h
#define Employee_h

class Employee
{
private:
    string login;
    
public:
    
    string getLogin()
    {
        return login;
    }
    
    void setLogin(string log)
    {
        login = log;
    }
   
    
    
};



#endif /* Employee_h */
