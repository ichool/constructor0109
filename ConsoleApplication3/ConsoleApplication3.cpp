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

	mahasiswa(int iNim);
	mahasiswa(string iNama);
	mahasiswa(int iNim, string iNama);
	void cetak();
};
