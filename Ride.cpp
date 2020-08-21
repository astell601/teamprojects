#include <iostream>
#include "Windows.h" //Sleep()을 가지고 있는 헤더파일
#include "Ride.h"
using namespace std;

	Viking::Viking() :people(0), answer(0) {} //생성자 + 멤버이니셜라이징

	Viking::Viking(int n) :people(n) {		//생성자 + 멤버이니셜라이징
		for (int i = 0; i < people; i++) {
			total++;
		}
	}
	int Viking::getSeat() {
		return seat;
	}
	int Viking::getCost() {
		return cost;
	}
	int Viking::getTime() {
		return time;
	}
	int Viking::getTotal() {
		return total;
	}
	int Viking::setSeat(int m) {
		return seat - m;
	}

	int Viking::IsViking() {
		if (total <= seat) {
			IsOk = 1;
			return IsOk;
		}
		else if (total < seat / 2) {
			cout << "수용가능한 최소 인원보다 " << (seat / 2) - total << "명 적습니다." << endl;
			IsOk = 0;
			return IsOk;
		}
		else {
				cout << "정원이 " << total - seat << "명 초과하였습니다" << endl;
				cout << "대기시간은 약" << time * (total - seat) << "분 입니다." << endl;
				cout << "진행하시겠습니까? (Y/N)" << endl;
				cin >> answer;
				if (answer == 'Y') {
					for (int i = total - seat; i > 0; i--) {
						total--;
					}
					IsOk = 1;
					return IsOk;
				}
				else if (answer == 'N') {
					return IsOk;
				}
				else {
					return IsOk;
				}
				return time * (total - seat);

		}
		
	}
	int Viking::RunViking() {
		if (IsOk == 1) {
			for (int k = 1; k <= time; k++) {
				cout << k << "..." << endl;
				Sleep(1000);
			}
			cout << "인원" << " : " << people << endl;
			cout << "금액" << " : " << people * cost << endl;
			cout << "즐거운 시간 보내세요!" << endl;
			IsOk = 0;
			return people * cost;

		}

	}


	Rollercoaster::Rollercoaster() :people(0), answer(0) {} //생성자 + 멤버이니셜라이징

	Rollercoaster::Rollercoaster(int n) :people(n) {		//생성자 + 멤버이니셜라이징
		for (int i = 0; i < people; i++) {
			total++;
		}
	}
	int Rollercoaster::getSeat() {
		return seat;
	}
	int Rollercoaster::getCost() {
		return cost;
	}
	int Rollercoaster::getTime() {
		return time;
	}
	int Rollercoaster::getTotal() {
		return total;
	}
	int Rollercoaster::setSeat(int m) {
		return seat - m;
	}

	int Rollercoaster::IsRoller() {
		if (total <= seat) {
			IsOk = 1;
			return IsOk;
		}
		else if (total < seat / 2) {
			cout << "수용가능한 최소 인원보다 " << (seat / 2) - total << "명 적습니다." << endl;
			IsOk = 0;
			return IsOk;
		}
		else {
			cout << "정원이 " << total - seat << "명 초과하였습니다" << endl;
			cout << "대기시간은 약" << time * (total - seat) << "분 입니다." << endl;
			cout << "진행하시겠습니까? (Y/N)" << endl;
			cin >> answer;
			if (answer == 'Y') {
				for (int i = total - seat; i > 0; i--) {
					total--;
				}
				IsOk = 1;
				return IsOk;
			}
			else if (answer == 'N') {
				return IsOk;
			}
			else {
				return IsOk;
			}
			return time * (total - seat);

		}
	}
	int Rollercoaster::RunRoller() {
		if (IsOk == 1) {
			for (int k = 1; k <= time; k++) {
				cout << k << "..." << endl;
				Sleep(1000);
			}
			cout << "인원" << " : " << people << endl;
			cout << "금액" << " : " << people * cost << endl;
			cout << "즐거운 시간 보내세요!" << endl;
			IsOk = 0;
			return people * cost;

		}

	}


	Gyrospin::Gyrospin() :people(0), answer(0) {} //생성자 + 멤버이니셜라이징

	Gyrospin::Gyrospin(int n) :people(n) {		//생성자 + 멤버이니셜라이징
		for (int i = 0; i < people; i++) {
			total++;
		}
	}
	int Gyrospin::getSeat() {
		return seat;
	}
	int Gyrospin::getCost() {
		return cost;
	}
	int Gyrospin::getTime() {
		return time;
	}
	int Gyrospin::getTotal() {
		return total;
	}
	int Gyrospin::setSeat(int m) {
		return seat - m;
	}

	bool Gyrospin::IsGyro() {
		if (total <= seat) {
			IsOk++;
			return IsOk;
		}
		else if (total < seat / 2) {
			cout << "수용가능한 최소 인원보다 " << (seat / 2) - total << "명 적습니다." << endl;
			IsOk = 0;
			return IsOk;
		}
		else {
			if (total > seat) {
				cout << "정원이 " << total - seat << "명 초과하였습니다" << endl;
				cout << "대기시간은 약" << time * (total - seat) << "분 입니다." << endl;
				cout << "진행하시겠습니까? (Y/N)" << endl;
				cin >> answer;
				if (answer == 'Y') {
					for (int i = total - seat; i > 0; i--) {
						total--;
					}
					IsOk = 1;
					return IsOk;
				}
				else if (answer == 'N') {
					return IsOk;
				}
				else {
					return IsOk;
				}
				return time * (total - seat);

			}
		}

	}
	int Gyrospin::RunGyro() {
		if (IsOk == 1) {
			for (int k = 1; k <= time; k++) {
				cout << k << "..." << endl;
				Sleep(1000);
			}
			cout << "인원" << " : " << people << endl;
			cout << "금액" << " : " << people * cost << endl;
			cout << "즐거운 시간 보내세요!" << endl;
			IsOk = 0;
			return people * cost;

		}

	}

	MerryGoRound::MerryGoRound() :people(0), answer(0) {} //생성자 + 멤버이니셜라이징

	MerryGoRound::MerryGoRound(int n) :people(n) {		//생성자 + 멤버이니셜라이징
		for (int i = 0; i < people; i++) {
			total++;
		}
	}
	int MerryGoRound::getSeat() {
		return seat;
	}
	int MerryGoRound::getCost() {
		return cost;
	}
	int MerryGoRound::getTime() {
		return time;
	}
	int MerryGoRound::getTotal() {
		return total;
	}
	int MerryGoRound::setSeat(int m) {
		return seat - m;
	}

	bool MerryGoRound::IsMerry() {
		if (total <= seat) {
			IsOk++;
			return IsOk;
		}
		else if (total < seat / 2) {
			cout << "수용가능한 최소 인원보다 " << (seat / 2) - total << "명 적습니다." << endl;
			IsOk = 0;
			return IsOk;
		}
		else {
			if (total > seat) {
				cout << "정원이 " << total - seat << "명 초과하였습니다" << endl;
				cout << "대기시간은 약" << time * (total - seat) << "분 입니다." << endl;
				cout << "진행하시겠습니까? (Y/N)" << endl;
				cin >> answer;
				if (answer == 'Y') {
					for (int i = total - seat; i > 0; i--) {
						total--;
					}
					IsOk = 1;
					return IsOk;
				}
				else if (answer == 'N') {
					return IsOk;
				}
				else {
					return IsOk;
				}
				return time * (total - seat);

			}
		}

	}
	int MerryGoRound::RunMerry() {
		if (IsOk == 1) {
			for (int k = 1; k <= time; k++) {
				cout << k << "..." << endl;
				Sleep(1000);
			}
			cout << "인원" << " : " << people << endl;
			cout << "금액" << " : " << people * cost << endl;
			cout << "즐거운 시간 보내세요!" << endl;
			IsOk = 0;
			return people * cost;

		}

	}


	Flumride::Flumride() :people(0), answer(0) {} //생성자 + 멤버이니셜라이징

	Flumride::Flumride(int n) :people(n) {		//생성자 + 멤버이니셜라이징
		for (int i = 0; i < people; i++) {
			total++;
		}
	}
	int Flumride::getSeat() {
		return seat;
	}
	int Flumride::getCost() {
		return cost;
	}
	int Flumride::getTime() {
		return time;
	}
	int Flumride::getTotal() {
		return total;
	}
	int Flumride::setSeat(int m) {
		return seat - m;
	}

	bool Flumride::IsFLum() {
		if (total <= seat) {
			IsOk++;
			return IsOk;
		}
		else if (total < seat / 2) {
			cout << "수용가능한 최소 인원보다 " << (seat / 2) - total << "명 적습니다." << endl;
			IsOk = 0;
			return IsOk;
		}
		else {
			if (total > seat) {
				cout << "정원이 " << total - seat << "명 초과하였습니다" << endl;
				cout << "대기시간은 약" << time * (total - seat) << "분 입니다." << endl;
				cout << "진행하시겠습니까? (Y/N)" << endl;
				cin >> answer;
				if (answer == 'Y') {
					for (int i = total - seat; i > 0; i--) {
						total--;
					}
					IsOk = 1;
					return IsOk;
				}
				else if (answer == 'N') {
					return IsOk;
				}
				else {
					return IsOk;
				}
				return time * (total - seat);

			}
		}

	}
	int Flumride::RunFlum() {
		if (IsOk == 1) {
			for (int k = 1; k <= time; k++) {
				cout << k << "..." << endl;
				Sleep(1000);
			}
			cout << "인원" << " : " << people << endl;
			cout << "금액" << " : " << people * cost << endl;
			cout << "즐거운 시간 보내세요!" << endl;
			IsOk = 0;
			return people * cost;

		}

	}
