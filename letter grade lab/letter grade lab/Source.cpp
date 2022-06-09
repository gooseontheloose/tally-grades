#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Prototypes
void getGrades(char[], int);
void returnTotal(char[], char, int);

void getGrades(char gradeList[], int totalGrades)
{
	cout << "All grades must be uppercase A, B, C, D, F \n" << endl;
	for (int i = 0; i < totalGrades; i++) {

		cout << "Please input grade " << ":" << endl;
		cin >> gradeList[i];
	}

}


void returnTotal(char gradeList[], char grade, int totalGrades)
{
	int total = 0;

	for (int i = 0; i < totalGrades; i++) {

		if (gradeList[i] == grade)
			total++;
	}

	cout << "Number of " << grade << ": " << total << endl;

}


int main()
{
	int totalGrades;
	char gradeList[50];

	cout << "How many grades are you entering? (1-50) \n";
	cin >> totalGrades;

	getGrades(gradeList, totalGrades);

	returnTotal(gradeList, 'A', totalGrades);
	returnTotal(gradeList, 'B', totalGrades);
	returnTotal(gradeList, 'C', totalGrades);
	returnTotal(gradeList, 'D', totalGrades);
	returnTotal(gradeList, 'F', totalGrades);



	system("PAUSE");
	return 0;
}