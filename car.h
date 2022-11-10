#include "date.h"
#include "vehicleid.h"

using namespace std;
class Car
{
  public:
    Car() : id_("Tesla", 121, "TUFFY121L"), release_date_(1, 1, 2022) {}
    Car(const VehicleId &new_id) : id_(new_id) {}
    Car(const Date &release_date) : release_date_(release_date) {}
    Car(const VehicleId &new_id, const Date &release_date) : id_(new_id), release_date_(release_date) {}

    VehicleId Id();
    void SetId(const VehicleId &id);
    Date ReleaseDate();
    void SetReleaseDate(const Date &new_date);
    void Print() const;

  private:
    VehicleId id_;
    Date release_date_;
};
