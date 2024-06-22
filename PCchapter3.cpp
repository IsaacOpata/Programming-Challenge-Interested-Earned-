//Isaac Opata
//June 6, 2024
//Programming Challenge 18- Interest earned

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double principal, rate, interest, futureAmount;
	int compoundingCriteria;

	cout << "Enter the principal, rate, compoundingCriteria: ";
	cin >> principal >> rate >> compoundingCriteria;

	futureAmount = principal * pow(1 + (rate * 0.01 / compoundingCriteria), compoundingCriteria);
	interest = futureAmount - principal;

	//Display the results.

	cout << fixed << setprecision(2) << showpoint;
	cout << "Principal Amount: $   " << setw(10) << principal << endl;
	cout << "Rate of Interest:     " << setw(10) << rate << "%\n";
	cout << "compounding Criteria: " << setw(10) << compoundingCriteria << endl;
	cout << "Future Amount: $      " << setw(10) << futureAmount << "\n";
	cout << "Interest Earned: $    " << setw(10) << interest << endl;

	return 0;
}