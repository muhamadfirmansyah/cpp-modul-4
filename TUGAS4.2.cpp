#include <iostream>
using namespace std;
int main()
{
	int firman= 1; //inisialisasi penghitung
	cout << " Angka	Angka Kuadrat\n";
	cout << " ------------------------\n";
	while (firman <= 10)
	{
	cout << firman << "\t\t" << (firman * firman) << endl;
	firman++;
	}
	return 0;
}

