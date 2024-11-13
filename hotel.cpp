#include "hotel.h"

void main() {
	room r2(1,2);
	room *r1=new room(1,1);
	r1->printroomcondition();
	r2.printroomcondition();
}