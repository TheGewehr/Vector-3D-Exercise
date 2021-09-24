#include <iostream>

#include "3DVector.h"

using namespace std;


int main() {

	srand(time(NULL));

	Vector3D<double> Vector01;
	Vector01.x = rand()%10+1;
	Vector01.y = rand() % 10+1;
	Vector01.z = rand() % 10+1;

	Vector3D<double> Vector02;
	Vector02.x = rand() % 10+1;
	Vector02.y = rand() % 10 +1;
	Vector02.z = rand() % 10 +1;

	Vector3D<double> Vector03;
	Vector03.x = rand() % 10 +1;
	Vector03.y = rand() % 10 +1;
	Vector03.z = rand() % 10 +1;

	Vector3D<double> Vector04;
	Vector04.x = rand() % 10 +1;
	Vector04.y = rand() % 10 +1;
	Vector04.z = rand() % 10 +1;

	Vector3D<double> Vector05;
	Vector05.x = rand() % 10 +1;
	Vector05.y = rand() % 10+ 1;
	Vector05.z = rand() % 10 +1;

	Vector3D<double> Vector06;
	Vector06.x = rand() % 10 +1;
	Vector06.y = rand() % 10 +1;
	Vector06.z = rand() % 10 +1;

	Vector3D<double> Dummy01;
	Dummy01.x = rand() % 10 + 1;
	Dummy01.y = rand() % 10 +1;
	Dummy01.z = rand() % 10 +1;

	 Vector03+Vector04;

	cout << " Vector01 values:"<< Vector01.x <<" "<< Vector01.y <<" "<< Vector01.z << "\n" << endl;
	cout << " Vector02 values:" << Vector02.x << " " << Vector02.y << " " << Vector02.z << "\n" << endl;
	cout << " Vector03 values:" << Vector03.x << " " << Vector03.y << " " << Vector03.z << "\n" << endl;
	cout << " Vector04 values:" << Vector04.x << " " << Vector04.y << " " << Vector04.z << "\n" << endl;
	cout << " Vector05 values:" << Vector05.x << " " << Vector05.y << " " << Vector05.z << "\n" << endl;
	cout << " Vector06 values:" << Vector06.x << " " << Vector06.y << " " << Vector06.z << "\n" << endl;

	cout << " The distance between Vector01 and Vector02 is: "<< Vector01.DistanceTo(Vector02) << " centimeters\n" << endl; // centimeters just for the example
	cout << " Vector03 + Vector04 is: " << Vector03.x << " " << Vector03.y << " " << Vector03.z << " centimeters\n" << endl;

	 Vector03- Vector05;
	

	cout << " Vector03 - Vector05 is: " << Vector03.x << " " << Vector03.y << " " << Vector03.z << " centimeters\n" << endl;

	 Vector06*3;

	cout << " Vector06 * 3 is: " << Vector06.x << " " << Vector06.y << " " << Vector06.z << " centimeters\n" << endl;

	cout << " Is Vector05 equal to 0? ";

	if (Vector05.IsZero() == true)
	{
		cout << " Yes!" << endl;
	}
	else 
	{
		cout << " No!" << endl;
	}

	cout << " And now? ";

	Vector05.SetToZero();

	if (Vector05.IsZero() == true)
	{
		cout << " Yes!" << endl;
	}
	else
	{
		cout << " No!" << endl;
	}

	cout << " Is Vector03 equal to Vector04? ";

	if (Vector03==Vector04)
	{
		cout << " Yes!" << endl;
	}
	else
	{
		cout << " No!" << endl;
	}

	cout << " And now? ";

	Vector03=Vector04; 

	if (Vector03==Vector04)
	{
		cout << " Yes!" << endl;
	}
	else
	{
		cout << " No!" << endl;
	}


	cout << " Vector01 values:" << Vector01.x << " " << Vector01.y << " " << Vector01.z << "\n" << endl;
	cout << " Vector02 values:" << Vector02.x << " " << Vector02.y << " " << Vector02.z << "\n" << endl;
	cout << " Vector03 values:" << Vector03.x << " " << Vector03.y << " " << Vector03.z << "\n" << endl;
	cout << " Vector04 values:" << Vector04.x << " " << Vector04.y << " " << Vector04.z << "\n" << endl;
	cout << " Vector05 values:" << Vector05.x << " " << Vector05.y << " " << Vector05.z << "\n" << endl;
	cout << " Vector06 values:" << Vector06.x << " " << Vector06.y << " " << Vector06.z << "\n" << endl;
	

	return 0;
}