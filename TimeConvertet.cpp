// Time Converter

#include <iostream>

using namespace std;

int timeEntered = 0;  
int hoursOut = 0;  
int minutesOut = 0; 
int secondsOut = 0; 

char tChoice = ' '; 

bool validInput;  
bool calcRunning; 

void QuitCalculator() 
	cout << "Thanks for your time!" << endl;
	cout << "Cya!" << endl;
	calcRunning = false; 
	system("pause"); 
}

void WrongInput()  
{
	cout << "Wrong Input! - Please Enter [H], [M], [Z], [X], [C] or [Q] to quit" << endl; 
	system("pause");
}

void PrintTime1()
{
	cout << "Time: ";
	cout << timeEntered;
	cout << "s = ";

	cout << hoursOut;
	cout << "h ";

	cout << minutesOut;
	cout << "m ";

	cout << secondsOut;
	cout << "s" << endl;
	system("pause");
}

void PrintTime2()
{
	cout << "Time: ";
	cout << timeEntered;
	cout << "s = ";

	cout << hoursOut;
	cout << "h ";

	cout << minutesOut;
	cout << "m ";

	cout << secondsOut;
	cout << "s" << endl;
	system("pause");
}

void PrintTime3()
{
	cout << "Time: ";
	cout << timeEntered;
	cout << "m = ";

	cout << hoursOut;
	cout << "h ";

	cout << minutesOut;
	cout << "m " << endl;

	system("pause");
}

void PrintTime4()
{
	cout << "Time: "; 
	cout << timeEntered; 
	cout << "h = "; 

	cout << secondsOut; 
	cout << "s " << endl;

	system("pause");
}

void PrintTime5() 
{
	cout << "Time: ";
	cout << timeEntered;
	cout << "m = ";

	cout << minutesOut;
	cout << "s " << endl;

	system("pause");
}

void CalculateStoH() 
{
	cout << "Enter time in seconds: ";
	cin >> timeEntered;

	hoursOut = timeEntered / (60 * 60);
	secondsOut = timeEntered - (hoursOut * 60 * 60);

	minutesOut = secondsOut / 60;
	secondsOut = timeEntered % 60;

	PrintTime1();
}

void CalculateStoM()
{
	cout << "Enter time in seconds: ";
	cin >> timeEntered;

	hoursOut = timeEntered / (60 * 60);
	secondsOut = timeEntered - (hoursOut * 60 * 60); 

	minutesOut = secondsOut / 60;
	secondsOut = timeEntered % 60;

	PrintTime2();
}

void CalculateMtoH()
	cout << "Enter time in minutes: ";
	cin >> timeEntered;

	minutesOut = timeEntered % 60; 
	hoursOut = timeEntered / 60;

	PrintTime3();
}

void CalculateHtoS() 
{
	cout << "Enter time in hours: ";
	cin >> timeEntered;

	secondsOut = (timeEntered * 60 * 60); 

	PrintTime4();
}

void CalculateMtoS() 
{
	cout << "Enter time in minutes: ";
	cin >> timeEntered;

	minutesOut = (timeEntered * 60); 

	PrintTime5();
}

void TimeMenuInput()
{
	switch (tChoice)  
	{
	case 'H': // capital character that user can enter
	case 'h': // small character that the code will accept when entered by the user 
		CalculateStoH();
		break; // break here is neccessary otherwise it will continue running
	case 'M':
	case 'm':
		CalculateStoM();
		break;
	case 'Z':
	case 'z':
		CalculateMtoH();
		break;
	case 'X':
	case 'x':
		CalculateHtoS();
		break;
	case 'C':
	case 'c':
		CalculateMtoS();
		break;
	case 'Q':
	case 'q':
		QuitCalculator();
		break;
	default:
		WrongInput();
		break;
	}
}


void TimerMenu() 
{
	system("cls"); 
	cout << "********************" << endl;
	cout << "*  Time Converter  *" << endl;
	cout << "********************" << endl;
	cout << "[H] - Convert Seconds to Hours (s)" << endl;
	cout << "[M] - Convert Seconds to Minutes (s)" << endl;
	cout << "[Z] - Convert Minutes to Hours (m)" << endl;
	cout << "[X] - Convert Hours to Seconds (h)" << endl;
	cout << "[C] - Convert Minutes to Seconds (m)" << endl;
	cout << "[Q] - Quit " << endl;

	cin >> tChoice; 
	TimeMenuInput();
}

int main()
{
	validInput = false; 
	calcRunning = true; 

	while (calcRunning) {   
		TimerMenu();
	}
	return 0; 
}
