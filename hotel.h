#pragma once
#include<iostream>
#include<string>
using namespace std;

class room{
	string roomstatus;
	int peoplenum;
	std :: string roomnum;
public:
	room(int column, int floor) {
		string str_floor = to_string(floor);
		string str_column = to_string(column);
		
		roomnum = str_floor + '0' + str_column;
		roomstatus = "빈방";
		peoplenum = 0;

	};
	void printroomcondition() {
		cout << "방번호 :" << roomnum << endl;
		cout << "입실 상태:" << roomstatus << endl;
		cout << "인원수 : " << peoplenum << endl;

	};
	
};

//class hotel {
//	room[] rooms;
//};