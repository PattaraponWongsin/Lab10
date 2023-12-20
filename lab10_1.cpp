#include <iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}, studentCount = 0;
	string grade;
	
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<"\n";
	do{
		cout << "Student [" << studentCount + 1 << "]: ";
		cin >> grade;
		if (grade == "0")
			break; 
		if (grade == "A") 
			count[0] += 1;
		else if (grade == "B") 
			count[1] += 1;	
		else if (grade == "C") 
			count[2] += 1;	
		else if (grade == "D") 
			count[3] += 1;	
		else if (grade == "F") 
			count[4] += 1;	
		else{ 
			cout <<  "Wrong input. Please input again.\n";
			continue;
		} 
		studentCount++;
	} while (true);
	
	cout << "In total " << studentCount << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;
	
	return 0;
}