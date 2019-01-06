// Specification file for the Cyclone class
// Written By:
// IDE:

#ifndef CYCLONE_H
#define CYCLONE_H

using std::string;

class Cyclone {
    private:
        string name;
        string month;
        string catagory;
        int wind;
        string damage;
        int deaths;
    public:
    Cyclone() {name = ""; month = ""; catagory = "";
        wind = -1; damage = ""; deaths = -1; }  // Constructor
    Cyclone(string n, string m, string cat, int w, string d, int death)
    {
        name = n;
        month = m;
        catagory = cat;
        wind = w;
        damage = d;
        deaths = death;
    }  // Overloaded Constructor

    
    
    // Setters and getters for all variables
    
    string getname()
    {
        return name;
    }

    void setname(string newname)
    {
        name = newname;
    }
    
    string getmonth()
    {
        return month;
    }
    
    void setmonth(string newmonth)
    {
        month = newmonth;
    }
    
    string getcat()
    {
        return catagory;
    }
    
    void setcat(string newcat)
    {
        catagory = newcat;
    }
    
    int getwind()
    {
        return wind;
    }
    
    void setwind(int newwind)
    {
        wind = newwind; 
    }
    
    string getdamage()
    {
        return damage;
    }
    
    void setdamage(string newdamage)
    {
        damage = newdamage;
    }
    
    int getdeath()
    {
        return deaths;
    }
    
    void setdeath(int newdeath)
    {
        deaths = newdeath;
    }
};
#endif
