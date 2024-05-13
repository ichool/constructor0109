#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
	static long long int nim;
public:
    int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim)
	{ 
		nim = pNim; 
	}
	static int getNim() 
	{
		return nim;
	}
	mahasiswa(string pnama) : nama(pnama)
	{
		setID();
	}
};

long long int mahasiswa::nim = 20230140109;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printAll()
{
	cout << "ID =" << id << endl;
	cout << "nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("faisal azhar");
	mahasiswa mhs2("damar sadewa"); 
	mahasiswa mhs3("aqil firdaus");
	mahasiswa mhs4("galang sakti");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll(); 
	mhs4.printAll();

	cout << "akses dari luar object =" << mahasiswa::getNim() << endl;
}