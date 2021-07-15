#include <iostream>     
#include <algorithm>    
using namespace std;
int main() {
	int ArraryNum[] = { 1, 2, 3};
	int ArraryNum2[] = { 3, 2, 1 }; // for Testing as per Quesiton
	int ArraryNum2[] = { 1, 1, 5 }; // for Testing as per Quesiton

	sort(ArraryNum, ArraryNum + 3);

	do {
		cout << "The Input Numbers is : " << ArraryNum[0] << ' ' << ArraryNum[2] << ' ' << ArraryNum[1] << endl;
	} while (next_permutation(ArraryNum, ArraryNum));

	cout  << endl;
	cout << "The rearranged lowest possible order is : " << ArraryNum[0] << ' ' << ArraryNum[1] << ' ' << ArraryNum[2] << endl;
	cout << endl;
	system("pause");
	return 0;
}   