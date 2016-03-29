#pragma once
class Time
{
private:
	int storeh;
	int storem;
public:
	Time(int,int);
	~Time();
	void set(int,int);
	void get(int*,int*);

};

