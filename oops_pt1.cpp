#include<iostream>
using namespace std;

//The vehicle is base class.

class vehicle
{
  public:

  int number_typers;
  string name;
  int capacity;
  int mileage;

  public:

  void calculatemileage()
  {
    cout<<"The mileage is "<<mileage;
  }
};

// Now i will inherit the features of the base class into the derived classes.

class schoolBus: public vehicle
{
 

    string school_name;
    int number_holidays;

    public:


    void prinntnameofschool()
    {
        cout<<"The name of the school is "<<name;
    }
};

class car: public vehicle // Derived class car has inherited all the data from the base class vehicle.
{
  // No member named mileage.
  // No member function named calculatemileage.

    private:

    int number_airbags;
    int ac_consumption;

};

int main()
{
   car a;

   a.mileage = 50;
   a.calculatemileage();  
}