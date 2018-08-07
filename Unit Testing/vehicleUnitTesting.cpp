#include "pch.h"
#include "Vehicle.cpp"
using namespace std;




TEST(TestVehicle, TestgettersAndSetters) {
	int yr = 2018;
	string mak = "Honda";
	string mdl = "Accord";
	string plate = "GRP-RR3";
	bool inGarage = true;

	Vehicle myVehicle;
	
	myVehicle.setYear(yr);
	yr = myVehicle.getYear();
	EXPECT_EQ(2018, yr);

	myVehicle.setMake(mak);
	mak = myVehicle.getMake();
	EXPECT_EQ("Honda", mak);

	myVehicle.setModel(mdl);
	mdl = myVehicle.getModel();
	EXPECT_EQ("Accord", mdl);

	myVehicle.setPlateNumber(plate);
	plate = myVehicle.getPlateNumber();
	EXPECT_EQ("GRP-RR3", plate);

	EXPECT_EQ(false, myVehicle.isItCurrentlyInGarage());
	bool isItCurrentlyInGarage();
	myVehicle.parkingInParkingSpot();
	EXPECT_EQ(true, myVehicle.isItCurrentlyInGarage());
	myVehicle.leavingTheParkingSpot();
	EXPECT_EQ(false, myVehicle.isItCurrentlyInGarage());

}
TEST(TestVehicle, pause) {

	EXPECT_EQ(0, 0);
	system("pause");
}

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}