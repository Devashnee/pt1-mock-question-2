#pragma once

#include <iostream>


using namespace std;

class Time
{
protected:
	int storeh;
	int storem;
public:

	Time(int,int);
	~Time();
	void set(int,int);
	void get(int*,int*);
	void operator++();

	friend ostream& operator<<(ostream &, Time&);

};

static ostream &operator<<(ostream &out, Time &timeObj)
{
	out << timeObj.storeh << ":" << timeObj.storem;
	return out;
}

