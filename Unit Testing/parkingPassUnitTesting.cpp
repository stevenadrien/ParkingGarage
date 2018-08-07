#include "pch.h"
#include "ParkingPass.cpp"
using namespace std;




TEST(TestParkingPass, NewPass) {
	char premium = 'p';
	char basic = 'b';
	char day = 'd';

	ParkingPass myPremiumPass(premium);
	ParkingPass myBasicPass(basic);
	ParkingPass myDayPass(day);
	double premiumDuration = myPremiumPass.getDuration();
	double basicDuration = myBasicPass.getDuration();
	double dayDuration = myDayPass.getDuration();
	EXPECT_EQ(50, premiumDuration);
	EXPECT_EQ(30, basicDuration);
	EXPECT_EQ(15, dayDuration);
}

TEST(TestParkingPass, TestgettersAndSetters) {
	char type = 'p';
	ParkingPass mypass;
	mypass.setParkingPassData(type, 5);
	type = mypass.getParkingPassType();
	int spot = mypass.getParkingSpot();
	double dur = mypass.getDuration();
	EXPECT_EQ('p', type);
	EXPECT_EQ(5, spot);
	EXPECT_EQ(50, dur);
}

TEST(TestParkingPass, TestsExpiration) {
	char type = 'p';

	ParkingPass mypass(type);
	bool expiration = mypass.isItExpired();
	EXPECT_EQ(false, expiration);
	
}

TEST(TestParkingPass, pause) {

	EXPECT_EQ(0, 0);
	system("pause");
}

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}