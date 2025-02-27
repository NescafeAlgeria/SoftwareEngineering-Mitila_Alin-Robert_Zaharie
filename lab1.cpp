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

    Masina(string driver, string nrInmatriculare, int nrLocuri, string marca, string combustibil) : driver(driver), nrInmatriculare(nrInmatriculare), nrLocuri(nrLocuri), marca(marca), combustibil(combustibil)  {}

    
};

class Electric : public Masina {
private:

public:

    Electric(string driver, string nrInmatriculare, int nrLocuri, string marca, string combustibil) : Masina(pasageri, driver, nrInmatriculare, nrLocuri, marca, "Electric") {}

    
};

class IntComb : public Masina {
private:

public:

	IntComb(string driver, string nrInmatriculare, int nrLocuri, string marca, string combustibil) : Masina(pasageri, driver, nrInmatriculare, nrLocuri, marca, "Diesel") {}

    
};




int main()
{
	return 0;
}
