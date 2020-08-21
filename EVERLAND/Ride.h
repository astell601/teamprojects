#ifndef __RIDE_H__
#define __RIDE_H__
#include <iostream>
#include <Windows.h> //Sleep()을 가지고 있는 헤더파일
using namespace std;

class Viking {

private:
	const int time = 5; //분 단위
	const static int cost = 3000; //이용 요금 & const 변수 사용
	const int seat = 30; //좌석 & const 변수 사용
	int people; //탑승 인원
	int answer;
	static int total; //정원 & static 변수 사용
	static bool IsOk; //준비완료 & static 변수 사용

public:
	Viking() :people(0), answer(0) {} //생성자 + 멤버이니셜라이징

	Viking(int n) :people(n) {};

	int getSeat() {};
	int getCost() {};
	int getTime() {};
	int getTotal() {};
	int setSeat(int m) {};

	int IsViking() {};
	int RunViking() {};

};

class Rollercoaster {

private:
	const int time = 3; //분 단위
	const static int cost = 2000; //이용 요금 & const 변수 사용
	const int seat = 24; //좌석 & const 변수 사용
	int people; //탑승 인원
	int answer;
	static int total; //정원 & static 변수 사용
	static bool IsOk; //준비완료 & static 변수 사용

public:
	Rollercoaster() :people(0), answer(0) {} //생성자 + 멤버이니셜라이징

	Rollercoaster(int n) :people(n) {};		//생성자 + 멤버이니셜라이징
	
	int getSeat() {};
	int getCost() {};
	int getTime() {};
	int getTotal() {};
	int setSeat(int m) {};

	int IsRoller() {};
	int RunRoller() {};

};

class Gyrospin {

private:
	const int time = 5; //분 단위
	const static int cost = 5000; //이용 요금 & const 변수 사용
	const int seat = 60; //좌석 & const 변수 사용
	int people; //탑승 인원
	int answer;
	static int total; //정원 & static 변수 사용
	static bool IsOk; //준비완료 & static 변수 사용

public:
	Gyrospin() :people(0), answer(0) {} //생성자 + 멤버이니셜라이징

	Gyrospin(int n) :people(n) {};		//생성자 + 멤버이니셜라이징
	
	int getSeat() {};
	int getCost() {};
	int getTime() {};
	int getTotal() {};
	int setSeat(int m) {};
	
	bool IsGyro() {};
	int RunGyro() {};

};

class MerryGoRound {

private:
	const int time = 10; //분 단위
	const static int cost = 5000; //이용 요금 & const 변수 사용
	const int seat = 50; //좌석 & const 변수 사용
	int people; //탑승 인원
	int answer;
	static int total; //정원 & static 변수 사용
	static bool IsOk; //준비완료 & static 변수 사용

public:
	MerryGoRound() :people(0), answer(0) {} //생성자 + 멤버이니셜라이징

	MerryGoRound(int n) :people(n) {};		//생성자 + 멤버이니셜라이징
	
	int getSeat() {};
	int getCost() {};
	int getTime() {};
	int getTotal() {};
	int setSeat(int m) {};

	bool IsMerry() {};
	int RunMerry() {};
	
};

class Flumride {

private:
	const int time = 2; //분 단위
	const static int cost = 4000; //이용 요금 & const 변수 사용
	const int seat = 10; //좌석 & const 변수 사용
	int people; //탑승 인원
	int answer;
	static int total; //정원 & static 변수 사용
	static bool IsOk; //준비완료 & static 변수 사용

public:
	Flumride() :people(0), answer(0) {} //생성자 + 멤버이니셜라이징

	Flumride(int n) :people(n) {};		//생성자 + 멤버이니셜라이징
	
	int getSeat() {};
	int getCost() {};
	int getTime() {};
	int getTotal() {};
	int setSeat(int m) {};

	bool IsFLum() {};
	int RunFlum() {};

};

#endif
