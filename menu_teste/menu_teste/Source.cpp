#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

bool isLeap(int year) {
	if (year % 400 == 0) {
		return true;
	}
	else if ((year % 4 == 0) && (year % 100 != 0)) {
		return true;
	}
	else
		return false;
}

int monthDays(int year, int month) {
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		return 30;
	}
	else if (month == 2) {
		if (isLeap(year)) {
			return 29;
		}
		else {
			return 28;
		}
	}
	else return 31;
}

int weekDayNum(int year, int month, int day) {
	int c, s;
	int n = 0;
	int year_copy = year;
	if (isLeap(year)) {
		switch (month) {
		case 1: case 4: case 7:
			c = 6;
			break;
		case 2: case 8:
			c = 2;
			break;
		case 3: case 11:
			c = 3;
			break;
		case 5:
			c = 1;
			break;
		case 6:
			c = 4;
			break;
		case 9: case 12:
			c = 5;
			break;
		case 10:
			c = 0;
			break;
		}
	}
	else {
		switch (month) {
		case 1: case 10:
			c = 0;
			break;
		case 2: case 3: case 11:
			c = 3;
			break;
		case 4: case 7:
			c = 6;
			break;
		case 5:
			c = 1;
			break;
		case 6:
			c = 4;
			break;
		case 8:
			c = 2;
			break;
		case 9: case 12:
			c = 5;
			break;
		}
	}
	while (year_copy != 0) {
		n++;
		year_copy /= 10;
	}
	s = year / pow(10, n - 2);
	return ((int)floor((5 * (year % 100)) / 4) + c + day - 2 * (s % 4) + 7) % 7;
}

void weekDay(int year, int month, int day) {
	switch (weekDayNum(year, month, day)) {
	case 1:
		cout << "Domingo" << endl;
		break;
	case 2:
		cout << "Segunda" << endl;
		break;
	case 3:
		cout << "Terca" << endl;
		break;
	case 4:
		cout << "Quarta" << endl;
		break;
	case 5:
		cout << "Quinta" << endl;
		break;
	case 6:
		cout << "Sexta" << endl;
		break;
	case 0:
		cout << "Sabado" << endl;
		break;
	}
}

void monthName(int month) {
	switch (month) {
	case 1:
		cout << "Janeiro";
		break;
	case 2:
		cout << "Fevereiro";
		break;
	case 3:
		cout << "Marco";
		break;
	case 4:
		cout << "Abril";
		break;
	case 5:
		cout << "Maio";
		break;
	case 6:
		cout << "Junho";
		break;
	case 7:
		cout << "Julho";
		break;
	case 8:
		cout << "Agosto";
		break;
	case 9:
		cout << "Setembro";
		break;
	case 10:
		cout << "Outubro";
		break;
	case 11:
		cout << "Novembro";
		break;
	case 12:
		cout << "Dezembro";
		break;
	}
}

void displayMonth(int year, int month) {
	monthName(month);
	cout << "/" << year << endl;
	cout << setw(5) << "Dom" << setw(5) << "Seg" << setw(5) << "Ter" << setw(5) << "Qua" << setw(5) << "Qui" << setw(5) << "Sex" << setw(5) << "Sab" << setw(5) << endl;
	int ds = weekDayNum(year, month, 1);
	if (ds == 0) {
		cout << " " << setw(30);
		cout << "1" << setw(5);
		cout << endl;
		ds = -1;
	}
	else {
		for (int i = 1; i < ds; i++) {
			cout << " " << setw(5);
		}
		ds = ds - 2;
		cout << "1" << setw(5);
	}
	ds++;

	for (int i = 2; i <= monthDays(year, month); i++) {
		if (ds == 6) {
			cout << endl;
			ds = -1;
		}
		cout << i << setw(5);
		ds++;
	}
}

void displayYear(int year) {
	for (int i = 1; i <= 12; i++) {
		displayMonth(year, i);
		cout << endl << endl;
	}
}

void menu_op1() {
	bool validOption = false;
	do {
		int y, m, d;
		cout << endl << "Introduza a data pretendida (YYYY MM DD) : ";
		cin >> y >> m >> d;
		cout << endl << d << "/";
		monthName(m);
		cout << "/" << y << " - ";
		weekDay(y, m, d);

		cout << endl << "MENU:" << endl;
		cout << "1. Introduzir outra data." << endl;
		cout << "2. Voltar." << endl;
		cout << "Introduza o n. da opcao pretendida: ";

		int option;
		cin >> option;

		switch (option){
		case 1:
			break;
		case 2:
			validOption = true;
			break;
		default:
			cout << "Opcao invalida." << endl;
			break;
		}


	} while (!validOption);
}

void menu_op2() {
	bool validOption = false;
	do {
		int y, m;
		cout << endl << "Introduza o ano e o mes pretendido (YYYY MM) : ";
		cin >> y >> m;
		cout << endl;
		displayMonth(y, m);

		cout << endl << endl << "MENU:" << endl;
		cout << "1. Introduzir outra data." << endl;
		cout << "2. Voltar." << endl;
		cout << "Introduza o n. da opcao pretendida: ";

		int option; 
		cin >> option;

		switch (option) {
		case 1:
			break;
		case 2:
			validOption = true;
			break;
		default:
			cout << "Opcao invalida." << endl;
			break;
		}
	} while (!validOption);
}

void menu_op3() {
	bool validOption = false;
	do {
		int y;
		cout << endl << "Introduza o ano pretendido (YYYY) : ";
		cin >> y;
		cout << endl;
		displayYear(y);

		cout <<  "MENU:" << endl;
		cout << "1. Introduzir outro ano." << endl;
		cout << "2. Voltar." << endl;
		cout << "Introduza o n. da opcao pretendida: ";

		int option;
		cin >> option;

		switch (option) {
		case 1:
			break;
		case 2:
			validOption = true;
			break;
		default:
			cout << "Opcao invalida." << endl;
			break;
		}

	} while (!validOption);
}

void menu() {
	bool validOption = false;
	do {
		cout << "CALENDAR" << endl << endl;
		cout << "MENU:" << endl;
		cout << "1. Calcular dia da semana a partir de data." << endl;
		cout << "2. Mostrar mes." << endl;
		cout << "3. Mostrar calendario para ano completo." << endl;
		cout << "4. Sair." << endl;
		cout << "Introduza o n. da opcao pretendida: ";

		int option;
		cin >> option;

		switch (option) {
		case 1:
			menu_op1();
			cout << endl;
			break;

		case 2:
			menu_op2();
			cout << endl;
			break;

		case 3:
			menu_op3();
			cout << endl;
			break;

		case 4:
			validOption = true;
			break;

		default:
			cout << "Opção inválida." << endl;
			break;
		}
		
	} while (!validOption);
}

int main() {
	menu();
	return 0;
}