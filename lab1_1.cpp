#define diagonal_center_x dcx
#define diagonal_center_y dcy

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double xa, ya; // A (defined)
	double xb, yb; // B
	double xc, yc; // C (defined)
	double xd, yd; // D

	double diagonal_center_x, diagonal_center_y; // dcx, dcy

	cout << "Enter 'A' point coordinates (format: x y): ";
	cin >> xa >> ya;
	cout << endl;
	cout << "Enter 'B' point coordinates (format: x y): ";
	cin >> xc >> yc;
	cout << endl;

	dcx = (xa + xc) / 2;
	dcy = (ya + yc) / 2;

	xb = dcx + (ya - dcy);
	yb = dcy + (dcx - xa);
	xd = dcx - (ya - dcy);
	yd = dcy - (dcx - xa);

	cout << setw(6) << "Point" << setw(5) << "x" << setw(5) << "y" << endl;
	cout << setw(6) << "B" << setw(5) << xb << setw(5) << yb << endl;
	cout << setw(6) << "D" << setw(5) << xd << setw(5) << yd << endl;

	return 0;
}