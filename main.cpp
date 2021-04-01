#include "car.cpp""

int main() {
	Car c1{"2020 쏘렌토",2497,281 };
	Car c2{ "2021 카니발 하이리무진",9470,294 };
	Car c3{ "2021 K7 하이브리드",2359,159 };
	Car c4{ "2021 모닝",998,76 };

	cout << "기아차의 = " << c1.Getname() << ", " << "배기량 :" << c1.Getkm() << "cc" << ", " << "최대출력 :" << c1.Gethp() << "hp" << endl;
	cout << "기아차의 = " << c2.Getname() << ", " << "배기량 :" << c2.Getkm() << "cc" << ", " << "최대출력 :" << c2.Gethp() << "hp" << endl;
	cout << "기아차의 = " << c3.Getname() << ", " << "배기량 :" << c3.Getkm() << "cc" << ", " << "최대출력 :" << c3.Gethp() << "hp" << endl;
	cout << "기아차의 = " << c4.Getname() << ", " << "배기량 :" << c4.Getkm() << "cc" << ", " << "최대출력 :" << c4.Gethp() << "hp" << endl;
	
}