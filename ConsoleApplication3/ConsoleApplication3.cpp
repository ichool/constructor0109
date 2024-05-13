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
