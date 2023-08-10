#include<iostream>
using namespace std;

class Railway{
	private:
		string name;
		string from;
		string to;
		int tiket_id;
	public:
	dispUser(){
		cout << endl << endl << endl << "\t\t\t\t\t\t-: Railway Riservation Programm :- " << endl << endl << endl;
		cout << "\t\t\tEnter your name : ";
		cin >> this->name;
		cout << "\t\t\tFrom \t\t: ";
		cin >> this->from;
		cout << "\t\t\tTo \t\t: ";
		cin >> this->to;
		cout << "\t\t\tTiket ID : ";
		cin >> tiket_id;
	}
	dispComformation(){
		cout << endl << endl << "\t\t\tCongratulation Your agistration was done successfully....." << endl << endl;
	}
	
};

int main (){
	Railway r;
	r.dispUser();
	r.dispComformation();
	return 0;
}