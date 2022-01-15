#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int firman;
	cout << "Angka     Angka Kuadrat\n";
	cout << "-----------------------\n";
	for (firman = 1;firman <= 10; firman++)
		cout << firman << "\t\t" << (firman * firman) << endl;
	getch ();
	return 0;
}
