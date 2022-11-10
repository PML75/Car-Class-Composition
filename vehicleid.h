#include <string>

class VehicleId {
 public:
  VehicleId() : VehicleId("Tesla", 121, "TUFFY121L") {}
  VehicleId(const std::string &model, int vin, const std::string &license_plate)
      : model_(model), vin_(vin), license_plate_(license_plate) {}

  int Vin() const { return vin_; }
  void SetVin(int vin) { vin_ = vin; }
  std::string Model() const { return model_; }
  void SetModel(const std::string &model) { model_ = model; }
  std::string LicensePlate() const { return license_plate_; }
  void SetLicensePlate(const std::string &license_plate) {
    license_plate_ = license_plate;
  }

 private:
  // A vehicle identification number (VIN)
  int vin_;
  std::string model_;
  std::string license_plate_;
};
