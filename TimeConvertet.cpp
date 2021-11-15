// Time Converter

#include <iostream>

using namespace std;

int timeEntered = 0;  // variable for user input
int hoursOut = 0;  // variable for calculating hours
int minutesOut = 0; // variable for calculating minutes
int secondsOut = 0; // variable for calculating or outputing seconds

char tChoice = ' '; // varialbe allowing the user to enter the neccessery character

bool validInput;  // boolean function for valid input entered by the user which is set to false, meaning the program will ask for a valid input if input is wrong 
bool calcRunning; // boolean funtion for calculator running if set to true

void QuitCalculator() // void funtion for quiting the calculator if input from the user is 'q' to quit as well as making it clear for the user he's successfully quited the program
{
	cout << "Thanks for your time!" << endl;
	cout << "Cya!" << endl;
	calcRunning = false; // boolean variable funtion set to false, meaning if Q is entered by user the pregram will terminate and quit
	system("pause"); // is used to execute pause command and make the terminal wait for a key press
}

void WrongInput() // void function for wrong input by the user 
{
	cout << "Wrong Input! - Please Enter [H], [M], [Z], [X], [C] or [Q] to quit" << endl; // outputting the right commands the user should chooce
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
	cout << "Time: "; // output for the terminal
	cout << timeEntered; // the entered time output by the user
	cout << "h = "; // output for minutes

	cout << secondsOut; 
	cout << "s " << endl;

	system("pause");
}

void PrintTime5() // void funtion setting up the output on the terminal for the time entered by the user
{
	cout << "Time: ";
	cout << timeEntered;
	cout << "m = ";

	cout << minutesOut;
	cout << "s " << endl;

	system("pause");
}

void CalculateStoH() // void funtion calculating seconds to hours allowing to user to enter the time in seconds
{
	cout << "Enter time in seconds: ";
	cin >> timeEntered;

	hoursOut = timeEntered / (60 * 60);
	secondsOut = timeEntered - (hoursOut * 60 * 60);

	minutesOut = secondsOut / 60;
	secondsOut = timeEntered % 60;

	PrintTime1(); // icluding the void function above here as it makes the code clearer and tidy
}

void CalculateStoM() // void funtion calculating seconds to minutes allowing to user to enter the time in seconds
{
	cout << "Enter time in seconds: ";
	cin >> timeEntered;

	hoursOut = timeEntered / (60 * 60);
	secondsOut = timeEntered - (hoursOut * 60 * 60); // calculating the entered seconds to minutes as well as outputing hours and seconds if large number entered by user

	minutesOut = secondsOut / 60;
	secondsOut = timeEntered % 60;

	PrintTime2();
}

void CalculateMtoH() // void funtion calculating minutes to hours allowing to user to enter the time in minutes
{
	cout << "Enter time in minutes: ";
	cin >> timeEntered;

	minutesOut = timeEntered % 60; // calculating the entered minutes to hours as well as using modulo which gives the remainder of a division the value of 2
	hoursOut = timeEntered / 60;

	PrintTime3();
}

void CalculateHtoS() // void funtion calculating hours to seconds allowing to user to enter the time in hours
{
	cout << "Enter time in hours: ";
	cin >> timeEntered;

	secondsOut = (timeEntered * 60 * 60); // calculating the entered hours to seconds

	PrintTime4();
}

void CalculateMtoS() // void funtion calculating minutes to seconds allowing to user to enter the time in minutes
{
	cout << "Enter time in minutes: ";
	cin >> timeEntered;

	minutesOut = (timeEntered * 60); // calculating the entered minutes to seconds

	PrintTime5();
}

void TimeMenuInput()
{
	switch (tChoice)   // using switch to make a list of characters the user uses specifically if not output will be false and they'll have to enter the right word to carry on 
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


void TimerMenu() // void function under the name TimerMenu, making the menu and giving different options for the user to chooce
{
	system("cls"); // making the screen terminal clear
	cout << "********************" << endl;
	cout << "*  Time Converter  *" << endl;
	cout << "********************" << endl;
	cout << "[H] - Convert Seconds to Hours (s)" << endl;
	cout << "[M] - Convert Seconds to Minutes (s)" << endl;
	cout << "[Z] - Convert Minutes to Hours (m)" << endl;
	cout << "[X] - Convert Hours to Seconds (h)" << endl;
	cout << "[C] - Convert Minutes to Seconds (m)" << endl;
	cout << "[Q] - Quit " << endl;

	cin >> tChoice; // allowing the user to enter input
	TimeMenuInput();
}

int main()
{
	validInput = false; // boolean function set to false
	calcRunning = true; // boolean function set to true

	while (calcRunning) {   // while loop for repeating the menu allowing the user to have another go until the user decides when to quit
		TimerMenu();
	}
	return 0; // the program will execute successfully
}
