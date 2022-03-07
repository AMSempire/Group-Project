#include "MailingAddress.h"
#include <iostream>
#include <string>
using namespace std;

  MailingAddress::MailingAddress(){ //constructor
    _streetNumber = 123;
   _streetName = "PSU";
   _city = "Brandywine";
   _state = "PA";
   _zip = 19426;
   _type = "Permanent";
  }
  MailingAddress::MailingAddress(double streetNumber, double streetName, string city, //construcotr
  string state, double zip, string type){
     _streetNumber = streetNumber;
   _streetName = streetName;
   _city = city;
   _state = state;
   _zip = zip;
   _type = type;
  }
  MailingAddress::~MailingAddress(){
    cout << "This will delete the Mailing Address object." << endl;
  }

  double MailingAddress::getStreetNumber(){ //accessor functions
        return _streetNumber;
    }
  string MailingAddress::getStreetName(){
    return _streetName;
  }
  string MailingAddress::getCity(){
    return _city;
  }
  string MailingAddress::getState(){
    return _state;
  }
  double MailingAddress::getZip(){
    return _zip;
  }
  string MailingAddress::getType(){
    return _type;
  }

  double MailingAddress::changeStreetNumber(){//mutator functions
    cout << "Please enter a new street number." << endl;
    cin >> _streetNumber;
    return _streetNumber;
    }
  string MailingAddress::changeStreetName(){
   cout << "Please enter a new street name." << endl;
    cin >> _streetName;
    return _streetName;
  }
  string MailingAddress::changeCity(){
    cout << "Please enter a city name." << endl;
    cin >> _city;
    return _city;
  }
  string MailingAddress::changeState(){
    cout << "Please enter a new state." << endl;
    cin >> _state;
    return _state;
  }
  double MailingAddress::changeZip(){
    cout << "Please enter a new zip code." << endl;
    cin >> _zip;
    return _zip;
  }
  string MailingAddress::changeType(){
    cout << "Please enter a new type of address." << endl;
    cin >> _type;
    return _type;
  }
