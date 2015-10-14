#include "stdafx.h"
#include <vector>
#include <iostream>
#include "Energy.cpp"
#include <algorithm>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>

using namespace std;



int main()
{
	int A[10];
	std::srand(std::time(0));


	cout << "ola ola";

	for (int i = 0; i < 10; i++){	
		A[i] = std::rand() % 100;
		cout << A[i];
	}
	
	ofstream myfile;
	myfile.open("D:\example.csv");
	
	for (int i=0; i < 10; i++){
		myfile << i << "," ;
		for (int k = 0; k < 10; k++){
			myfile << *(A+k) << "," ;
		}
		myfile << endl;
	}
	myfile.close();
	//return 0;
	system("pause");
}