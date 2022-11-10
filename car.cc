#include "car.h"

#include <iostream>

VehicleId Car::Id()
{
  return id_;
}
void Car::SetId(const VehicleId &id)
{
  id_ = id;
}
Date Car::ReleaseDate()
{
  return release_date_;
}
void Car::SetReleaseDate(const Date &new_date)
{
  release_date_ = new_date;
}
void Car::Print() const
{
  cout << "The model of the car is: " << id_.Model() << endl;
  cout << "The VIN of the car is: " << id_.Vin() << endl;
  cout << "The license plate of the car is: " << id_.LicensePlate() << endl; 
  cout << "The release date of the car is: " << release_date_.Month() << "/" << release_date_.Day() << "/" << release_date_.Year() << endl; 
}
