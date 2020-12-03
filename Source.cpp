#include <iostream>
#include <fstream>
using namespace std;
/*This program will take on Collatz conjecture. If all numbers lead back to 1 using the concept
used by the conjecture. If the program hits a number that won't satisfy the conjecture
it won't be able to end and loop infinitely. If it does a "SUCESS" tag will be 
written at the bottom of the file which means all numbers passed the test.*/

int main() {
	int currNum;
	int numberToTest;
	ofstream outFile;

	outFile.open("collatz.txt");

	for (numberToTest = 2; numberToTest <= 999999999; numberToTest++) {
		currNum = numberToTest;
		while (currNum != 1) {//loop will not exit until the current number is 1
			cout << currNum << " ";
			if (currNum < 0)
				break;
			else if (currNum % 2 == 0) //if the number is even halve it
				currNum = currNum / 2;
			else if (currNum % 2 != 0) //if the number is odd muliply by 3 and add 1
				currNum = (currNum * 3) + 1;
		}
		if (currNum == 1) {
			cout << numberToTest << ": leads back to 1" << endl; //display output in terminal
			outFile << numberToTest << ": leads back to 1" << endl; //save data to file
		}
	}

	if (numberToTest == 999999999) {
		cout << "SUCESS: ALL NUMBERS PASSED" << endl;
		outFile << "SUCESS: ALL NUMBERS PASSED" << endl;
	}

	outFile.close();
	
}