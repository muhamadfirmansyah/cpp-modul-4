#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
const int FIRMAN_DAYS = 7;
int count;
double total;
	for (count = 1, total = 0.0; count <= FIRMAN_DAYS; count++)
	{
		double sales;
		cout << "Masukan penjualan untuk hari " << count << ":";
		cin >> sales;
		total += sales;
	}
	cout << fixed << showpoint << setprecision(3);
	cout << "Total penjualan adalah Rp." << total << endl;
	return 0; 
}
