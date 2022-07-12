#include <iostream>
#include <windows.h>

using namespace std;

#define color SetConsoleTextAttribute

/*

NOTE: If you put your name on this program, it would be nice if you give credits to me! something like this: "This program was originally created by JohnTheOne"

*/

void logo() {

	SetConsoleTitleA("Salary Calculator | made in C++ | Developed by JohnTheOne | .gg/Px9yXTHJaf");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 1);

	cout << "________________________________________________________________________________________________________________________" << endl;
	cout << "       __   ____                 __                                 __ " << endl;
	cout << "      / /  / __ \\___ _   _____  / /___  ____  ____ ___  ___  ____  / /_" << endl;
	cout << " __  / /  / / / / _ \\ | / / _ \\/ / __ \\/ __ \\/ __ `__ \\/ _ \\/ __ \\/ __/" << endl;
	cout << "/ /_/ /  / /_/ /  __/ |/ /  __/ / /_/ / /_/ / / / / / /  __/ / / / /_  " << endl;
	cout << "\\____/  /_____/\\___/|___/\\___/_/\\____/ .___/_/ /_/ /_/\\___/_/ /_/\\__/  " << endl;
	cout << "                                    /_/                                " << endl;
	cout << "________________________________________________________________________________________________________________________" << endl;
	cout << "" << endl;

	SetConsoleTextAttribute(hConsole, 15);
}

void year() {

	years:

	system("CLS");

	logo();

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 4);

	cout << "YEARLY SALARY" << endl;

	SetConsoleTextAttribute(hConsole, 15);

	cout << "\nEnter your hourly wage ($): " << endl;
	cout << "[\\>] ";
	float hourly_wage;
	cin >> hourly_wage;

	cout << "\nEnter your weekly working hours: " << endl;
	cout << "[\\>] ";
	float weekly_working_time;
	cin >> weekly_working_time;

	cout << "\nFor how many years do you want to calculate your salary? " << endl;
	cout << "[\\>] ";
	float years;
	cin >> years;

	if (hourly_wage < 0) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nNegative numbers are not possible." << endl;
		goto retry;
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (hourly_wage > 500) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nHourly wage is too high." << endl;
		SetConsoleTextAttribute(hConsole, 15);
		goto retry;
	}
	else if (hourly_wage > 100) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nAre you sure that you earn so much money in one hour? (yes/no)" << endl;
		SetConsoleTextAttribute(hConsole, 15);
		cout << "[\\>] ";
		string money;
		cin >> money;
		if (money == "yes") {
			goto Continue;
		}
		else if (money == "no") {
			goto retry;
		}
		else {
			cout << "\nInvalid choice." << endl;
			goto retry;
		}
	}


Continue:

	if (weekly_working_time > 168) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nThat is not possible; a week only has 168 hours." << endl;
		goto retry;
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (weekly_working_time < 0) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nNegative numbers are not possible." << endl;
		goto retry;
		SetConsoleTextAttribute(hConsole, 15);
	}

	if (years == 0) {
		float salary = hourly_wage * weekly_working_time * 13 / 3 * 12 * years;
		cout << "\nWith a hourly wage of " << hourly_wage << "$ and a weekly working time of " << weekly_working_time << "h, you earn " << salary << "$ in " << years << " years" << endl;
	}
	else if (years == 1) {
		float salary = hourly_wage * weekly_working_time * 13 / 3 * 12 * years;
		cout << "\nWith a hourly wage of " << hourly_wage << "$ and a weekly working time of " << weekly_working_time << "h, you earn " << salary << "$ in " << years << " year" << endl;
	}
	else if (years < 0) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nNegative numbers are not possible." << endl;
		goto retry;
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (years > 100) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\n100+ years are not possible." << endl;
		goto retry;
		SetConsoleTextAttribute(hConsole, 15);
	}
	else {
		float salary = hourly_wage * weekly_working_time * 13 / 3 * 12 * years;
		cout << "\nWith a hourly wage of " << hourly_wage << "$ and a weekly working time of " << weekly_working_time << "h, you earn " << salary << "$ in " << years << " years" << endl;
	}

	SetConsoleTextAttribute(hConsole, 1);

	SetConsoleTextAttribute(hConsole, 15);

retry:

	SetConsoleTextAttribute(hConsole, 15);
	cout << "________________________________________________________________________________________________________________________" << endl;
	SetConsoleTextAttribute(hConsole, 4);
	cout << "\nDo you want to calculate something again? (yes/no) " << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "[\\>] ";
	string again;
	cin >> again;

	if (again == "yes")
	{
		system("CLS");
		goto years;
	}
	else if (again == "no")
	{

		cout << "\nExiting in 3 seconds..." << endl;
		SetConsoleTextAttribute(hConsole, 15);
		Sleep(3000);
		exit;
	}
	else
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nInvalid choice." << endl;
		SetConsoleTextAttribute(hConsole, 15);
		cout << "\nExiting in 3 seconds..." << endl;
		Sleep(3000);
		exit;
	}
}

void month() {

	month:

	system("CLS");

	logo();

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 4);

	cout << "MONTHLY SALARY" << endl;

	SetConsoleTextAttribute(hConsole, 15);

	cout << "\nEnter your hourly wage ($): " << endl;
	cout << "[\\>] ";
	float hourly_wage;
	cin >> hourly_wage;

	cout << "\nEnter your weekly working hours: " << endl;
	cout << "[\\>] ";
	float weekly_working_time;
	cin >> weekly_working_time;

	cout << "\nFor how many months do you want to calculate your salary? " << endl;
	cout << "[\\>] ";
	float months;
	cin >> months;

	if (hourly_wage < 0) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nNegative numbers are not possible." << endl;
		goto retry;
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (hourly_wage > 500) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nHourly wage is too high." << endl;
		SetConsoleTextAttribute(hConsole, 15);
		goto retry;
	}
	else if (hourly_wage > 100) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nAre you sure that you earn so much money in one hour? (yes/no)" << endl;
		SetConsoleTextAttribute(hConsole, 15);
		cout << "[\\>] ";
		string money;
		cin >> money;
		if (money == "yes") {
			goto Continue;
		}
		else if (money == "no") {
			goto retry;
		}
		else {
			cout << "\nInvalid choice." << endl;
			goto retry;
		}
	}


Continue:

	if (weekly_working_time > 168) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nThat is not possible; a week only has 168 hours." << endl;
		goto retry;
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (weekly_working_time < 0) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nNegative numbers are not possible." << endl;
		goto retry;
		SetConsoleTextAttribute(hConsole, 15);
	}

	if (months == 0) {
		float salary = hourly_wage * weekly_working_time * 13 / 3 * months;
		cout << "\nWith a hourly wage of " << hourly_wage << "$ and a weekly working time of " << weekly_working_time << "h, you earn " << salary << "$ in " << months << " months" << endl;
	}
	else if (months == 1) {
		float salary = hourly_wage * weekly_working_time * 13 / 3 * months;
		cout << "\nWith a hourly wage of " << hourly_wage << "$ and a weekly working time of " << weekly_working_time << "h, you earn " << salary << "$ in " << months << " month" << endl;
	}
	else if (months < 0) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nNegative numbers are not possible." << endl;
		goto retry;
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (months > 100) {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\n100+ years are not possible." << endl;
		goto retry;
		SetConsoleTextAttribute(hConsole, 15);
	}
	else {
		float salary = hourly_wage * weekly_working_time * 13 / 3 * months;
		cout << "\nWith a hourly wage of " << hourly_wage << "$ and a weekly working time of " << weekly_working_time << "h, you earn " << salary << "$ in " << months << " months" << endl;
	}

	SetConsoleTextAttribute(hConsole, 1);

	SetConsoleTextAttribute(hConsole, 15);

retry:

	SetConsoleTextAttribute(hConsole, 15);
	cout << "________________________________________________________________________________________________________________________" << endl;
	SetConsoleTextAttribute(hConsole, 4);
	cout << "\nDo you want to calculate something again? (yes/no) " << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "[\\>] ";
	string again;
	cin >> again;

	if (again == "yes")
	{
		system("CLS");
		goto month;
	}
	else if (again == "no")
	{

		cout << "\nExiting in 3 seconds..." << endl;
		SetConsoleTextAttribute(hConsole, 15);
		Sleep(3000);
		exit;

	}
	else
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nInvalid choice." << endl;
		SetConsoleTextAttribute(hConsole, 15);
		cout << "\nExiting in 3 seconds..." << endl;
		Sleep(3000);
		exit;
	}

}

void select() {

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 1);

	logo();

	cout << "Do you want to calculate your monthly or yearly salary? (month/year)" << endl;
	cout << "[\\>] ";
	string yearmonth;
	cin >> yearmonth;

	if (yearmonth == "month") {

		month();

	}
	else if (yearmonth == "year") {

		year();

	}
	else {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "\nInvalid choice." << endl;
		SetConsoleTextAttribute(hConsole, 15);
		cout << "\nExiting in 3 seconds..." << endl;
		Sleep(3000);
		exit;
	}

}

int main()
{

	select();

}
