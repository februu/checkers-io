#include <iostream>
using namespace std;

class Gracz {
public:
    string nick;
	int wynik;


	Gracz(string nick, int wynik) : nick(nick), wynik(wynik) {}

	string getname() const {
		return nick;
	}

	int getscore() {
		return wynik;
	}
};


class ranking {
public:
	
	void addplayer(const Gracz& gracz) {

	}
	


};



int main() {






	return 0;
}