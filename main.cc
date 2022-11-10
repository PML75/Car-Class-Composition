#include <iostream>
#include "car.h"

using namespace std;

int main() {

  Car c1;
  c1.Print();
  std::cout << "\n";

  VehicleId tHonda("Honda", 3, "7B319X4");
  Car c2;
  c2.SetId(tHonda);
  c2.Print();
  std::cout << "\n";


  Date tDate(4, 11, 2018);
  Car c3;
  c3.SetReleaseDate(tDate);
  c3.Print();
  std::cout << "\n";


  Car c4(tHonda, tDate);
  c4.Print();
  std::cout << "\n";

  VehicleId vID;

  Date date;
  

  c4.SetId(vID);

  c4.SetReleaseDate(date);
  
  c4.Print();
  
  return 0;
}
