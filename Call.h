#ifndef CALL_H
#define CALL_H
#include <ctime>
class Call{
	public:
		Call();
		clock_t time; //time
		int priority;//priority
		clock_t timeAns;//time
		friend bool operator< (const Call & object, const Call & object2);
		friend bool operator== (const Call &object, const Call & object2);
		friend bool operator> (const Call & object, const Call &object2);

};	

#endif
