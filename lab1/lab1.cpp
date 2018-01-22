#include <iostream>
using namespace std;

int getNumber();

void doubleLarger(int & num_1, int & num_2);

double findAverage(int num_1, int num_2);

void display(double average);

int main(){
	int x;
	int y;
	x = getNumber();
	y = getNumber();
	doubleLarger(x, y);
	double out;
	out = findAverage(x, y);
	display(out);
}

int getNumber(){

//input none 
//returns an int value 
//side effect: prompts user to enter an integer 
	int num;
	cout << "Enter an integer: ";
	cin>>num;
	return num;
}

void doubleLarger(int & num_1, int & num_2){

	if (num_1 > num_2){
		num_1 = num_1*2;
	}
	else{
		num_2 = num_2*2;
	}
}

double findAverage(int num_1, int num_2){
	double res;
	int temp;
	temp =(num_1 + num_2);
	res = (double)temp/2 ;
	return res;
}

void display(double average){
       cout<< "Average: " << average <<endl;
}

