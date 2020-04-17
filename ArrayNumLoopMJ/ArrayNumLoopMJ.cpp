/*Mike Jasiczek; Into to Programming; 6/6/2019;  Week 5 Programming Assignment; 
This is a number sorter.  It will ask you for the number of numbers that you would like to enter.  Then it will check them 
to be sure that they are valid.  Then it puts the entered numbers into an array, I then printed the unsorted numbers.
Then I ran two loops comparing the values and switched them if necessary.  It was a bubble sort.  I did realize that 
I wasn't sorting all the numbers.  Just two and switching them and letting the computer do the work.  That made things easier.
Also I learned that squiggly brackets and their placement matter as I had a mindblowing bug that was displaying my unsorted 
numbers incorrectly.  I found it and fixed it after the anger had subsided.  
*/

#include "pch.h"
#include <iostream>
#include <cstdlib>

#define MAX 101
using namespace std;

int main()
{
	int N = 0;
	int nums = 0;
	int holder = 0;
	int sizeArray[MAX];

    cout << "How many numbers do you have to enter? "; 
	cin >> N;
	if (N > 100 || N < 1) {
		cout << "Please enter a number between one and one hundred:  " << endl; 
		cin >> N; 
	}
	cout << "\n\n";
	for (int i = 0; i < N; i++) { //Loop to get the numbers and place them in the array (sizeArray)
		cout << "Enter Number: ";
		cin >> sizeArray[i];

		
	}
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";
	cout << "Unsorted Inputted Numbers are: " << endl;
	for (int i = 0; i < N; i++) {
		cout << "Element " << i + 1 << "\t\t\t" << sizeArray[i] << "\t" << endl; //Prints the imputted numbers unsorted
	}
		for (int i = 0; i < N; i++) { //Takes two numbers in the array 1st Number
			for (int j = i + 1; j < N; j++) { //2nd number
				if (sizeArray[i] > sizeArray[j]) { //Compares them
					holder = sizeArray[i]; //if the 2nd number is smaller it placeholds the first in a temp var
					sizeArray[i] = sizeArray[j]; //switches places.  2nd number moves to the first position
					sizeArray[j] = holder; //moves the original first number the second position
				}
			}
		}
	
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";
	cout << "Sorted Numbers are: " << endl; //Loops through the array to print the sorted numbers
	for (int i = 0; i < N; i++) {
		cout << sizeArray[i] << "\t" << endl;
	}

}

