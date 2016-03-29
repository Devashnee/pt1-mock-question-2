#include "Time.h"


Time::Time(int hours, int min)
{
	storeh = hours;
	storem = min;
}


Time::~Time()
{
}
void Time::set(int hours,int min){
	storeh = hours;
	storem = min;
}
void Time::get(int *hours, int *min){
	*hours = storeh;
	*min = storem;
}
void Time::operator++(){
	storem  ++;
	if (storem == 60){
		storeh++;
		storem = 0;
	}
}

