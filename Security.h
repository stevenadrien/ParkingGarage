#ifndef Security_h
#define Security_h

class Security
{
private:
    string login = "superman";
    string name = "Harry";
    
public:
    
    string getLogin()
    {
        return login;
    }
    
    void setLogin(string log)
    {
        login = log;
    }
   
    string getName()
    {
        return name;
    }
    
    void setName(string nm)
    {
        name = nm;
    }
};
    
    




#endif /* Security_h */
