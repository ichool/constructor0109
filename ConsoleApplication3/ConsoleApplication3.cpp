#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
public:
	int nim;
	string nama;

public:
	mahasiswa()
	{
		nim = 0;
		nama = "";
	};

	mahasiswa(int iNim)
	{
		iNim = nim;
	}
	mahasiswa(string iNama)
	{
		iNama = nama;
	}
	mahasiswa(int iNim, string iNama)

	{
		nim = iNim;
		nama = iNama;
	}
	void cetak()
	{
		cout << endl << "Nim =" << nim << endl;
		cout << "nama =" << nama << endl;
	}
};

int main()
{
	mahasiswa mhs1;
	mahasiswa mhs2(20);
	mahasiswa mhs3("indra");
	mahasiswa mhs4(20, "fauzan");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	return 0;
}