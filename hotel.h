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
		roomstatus = "���";
		peoplenum = 0;

	};
	void printroomcondition() {
		cout << "���ȣ :" << roomnum << endl;
		cout << "�Խ� ����:" << roomstatus << endl;
		cout << "�ο��� : " << peoplenum << endl;

	};
	
};

//class hotel {
//	room[] rooms;
//};