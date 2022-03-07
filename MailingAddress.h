#pragma once
#include <string>
#include <iostream>
using namespace std;


class MailingAddress{

private:
  double _streetNumber;
  string _streetName; 
  string _city;
  string _state;
  double _zip;
  string _type;

public:
  MailingAddress(); 
  MailingAddress(double streetNumber, double streetName, string city, //construcotr
  string state, double zip, string type);
  ~MailingAddress();

  double getStreetNumber(); //accessor functions
  string getStreetName();
  string getCity();
  string getState();
  double getZip();
  string getType();

  double changeStreetNumber();//mutator functions
  string changeStreetName();
  string changeCity();
  string changeState();
  double changeZip();
  string changeType();




  
  
  


      



};