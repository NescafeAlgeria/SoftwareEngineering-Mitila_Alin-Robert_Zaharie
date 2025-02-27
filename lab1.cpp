#include <iostream>
#include <list>

using namespace std;


class Masina {
protected:
	list<string> pasageri;
	string driver;
	string nrInmatriculare;
	int nrLocuri;
	string marca;
	string combustibil;

public:

	Masina(string driver, string nrInmatriculare, int nrLocuri, string marca, string combustibil) : driver(driver), nrInmatriculare(nrInmatriculare), nrLocuri(nrLocuri), marca(marca), combustibil(combustibil) {}
	void SetPassengers(string NumePasager) {
		this->pasageri.push_back(NumePasager);
	}

	void detaliiMasina() {
		cout <<"Nr de locuri " << this->nrLocuri<<endl;
		cout << "Conducator " << this->driver<<endl;
		cout << "nr matriculare " << this->nrInmatriculare<<endl;
	
	}

	void Pasageri()
	{

		cout << " nume Pasageri: " << endl;
		for (string nume : this->pasageri)
			cout << nume << endl;
	}

		 
};

class Electric : public Masina {
private:

public:

	Electric(string driver, string nrInmatriculare, int nrLocuri, string marca) : Masina( driver, nrInmatriculare, nrLocuri, marca, "Electric") {}


};

class IntComb : public Masina {
private:

public:

	IntComb(string driver, string nrInmatriculare, int nrLocuri, string marca) : Masina( driver, nrInmatriculare, nrLocuri, marca, "Diesel") {}


};




int main()
{
	Electric masina1((string)"Marcel", (string)"tbc", 4, (string)"honda");
	Electric masina2((string)"Dorel", (string)"thc", 4, (string)"Dacia");
	IntComb masina3((string)"Nenorocel", (string)"sod", 4, (string)"honda");
	IntComb masina4((string)"Clopotel", (string)"ask", 4, (string)"Logan");

	masina2.SetPassengers("Ioana");
	masina2.SetPassengers("Robert");
	masina2.SetPassengers("Alex");

	masina2.detaliiMasina();
	masina2.Pasageri();


	return 0;
}
