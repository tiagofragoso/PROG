#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

double pi = 3.14159265;

// EXERCÍCIO 3.1

/*

double distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double area(double x1, double y1, double x2, double y2, double x3, double y3) {
	double a = distance(x1, y1, x2, y2);
	double b = distance(x1, y1, x3, y3);
	double c = distance(x2, y2, x3, y3);
	double s = (a + b + c) / 2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}

int main() {
	double x1, y1, x2, y2, x3, y3;
	cout << "TRIANGLE AREA CALCULATOR" << endl;
	cout << "V1 (x1 y1) ? ";
	cin >> x1 >> y1;
	cout << "V2 (x2 y2) ? ";
	cin >> x2 >> y2;
	cout << "V3 (x3 y3) ? ";
	cin >> x3 >> y3;
	cout << fixed << setprecision(2) << "Area = " << area(x1, x2, x2, y2, x3, y3) << endl;
	return 0;
}

*/

// EXERCÍCIO 3.2
/*
bool isPrime(int n) {
	bool prime = true;
	int a = sqrt(n);
	for (int i = 2; i <= a; i++) {
		if ((n % i) == 0) {
			prime = false;
			break;
		}
	}
	return prime;
}


//VERIFICAR SE UM NÚMERO É PRIMO

int main() {
	int n;
	cout << "Insert an integer: ";
	cin >> n;
	if (isPrime(n)) {
		cout << n << " is prime." << endl;
	}
	else {
		cout << n << " is not prime." << endl;
	}
	return 0;
}

*/

/* IMPRIMIR 100 PRIMEIROS PRIMOS

int main() {
	int cnt = 0;
	for (int i = 2; cnt < 5; i++) {
		if (isPrime(i)) {
			cout << i << " ";
			cnt++;
		}
	}
	return 0;
}

*/

/* IMPRIMIR PRIMOS < 1000

int main() {
	for (int i = 2; i < 1000; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	return 0;
}

*/

// EXERCÍCIO 3.3

/*

double estSqrt(int n, double delta, int nMaxIter) {
	int i;
	double rq, rqn, rqn2, dif;
	rq = 1;
	i = 1;
	do {
		rqn = (rq + (n / rq)) / 2.0;
		rqn2 = pow(rqn, 2.0);
		dif = n - rqn2;
		cout << rq << " " << rqn << " " << rqn2 << " " << dif << endl;
		rq = rqn;
	} while (abs(dif) > delta && i <= nMaxIter);
	return rq;
}


int main() {
	int n, nMaxIter;
	double delta;
	cout << "Insert 2 ints and a double: (n nNaxIter delta): ";
	cin >> n >> nMaxIter >> delta;
	cout << "Raiz quadrada de " << n << " = " << estSqrt(n, delta, nMaxIter) << endl;
	return 0;
}

*/

// EXERCÍCIO 3.4

/*

double round(double x, unsigned n) {
	return ceil(x * pow(10.0, n)) / pow(10.0, n);
}

int main() {
	double x;
	unsigned n;
	cout << "x , n (x n) ? ";
	cin >> x >> n;
	cout << round(x, n) << endl;
	return 0;
}

*/

//EXERCÍCIO 3.5

/*

bool readFracc(int &numerator, int &denominator) {
	char sep;
	int n, d;
	cin >> n >> sep >> d;
	if (!cin.fail() && sep == '/') {
		numerator = n;
		denominator = d;
		return true;
	}
	else {
		numerator = 0;
		denominator = 0;
		return false;
	}

}

void writeFracc(int num, int den) {
	cout << num << "/" << den << endl;
}

void reduceFracc(int &numerator, int &denominator) {
	int a = numerator;
	int b = denominator;
	int q, r;
	while (b != 0) {
		q = a / b;
		r = a % b;
		a = b;
		b = r;
	}
	numerator /= a;
	denominator /= a;
}

void sumsub(int &numerator, int &denominator, int type) {
	int n1, d1, n2, d2;
	readFracc(n1, d1);
	readFracc(n2, d2);
	if (type == -1) {
		n2 = -n2;
	}
	if (d1 != d2) {
		n1 *= d2;
		n2 *= d1;
		denominator = d1 * d2;
	}
	else {
		denominator = d1;
	}
	numerator = n1 + n2;
}

void multdiv(int &numerator, int &denominator, int type) {
	int n1, d1, n2, d2;
	readFracc(n1, d1);
	if (type == 0) {
		readFracc(n2, d2);
	}
	else {
		readFracc(d2, n2);
	}
	numerator = n1 * n2;
	denominator = d1 * d2;
}


int main() {
	int numerator, denominator;
	char op;
	cout << "Choose the operation (+ - * /) ? ";
	cin >> op;
	cout << "Insert 2 fractions ( (N/D) (N/D) ) ? ";
	switch (op) {
	case '+':
		sumsub(numerator, denominator, 0);
		break;
	case '-':
		sumsub(numerator, denominator, -1);
		break;
	case '*':
		multdiv(numerator, denominator, 0);
		break;
	case '/':
		multdiv(numerator, denominator, -1);
		break;
	}
	reduceFracc(numerator, denominator);
	writeFracc(numerator, denominator);
	return 0;
}

*/

// EXERCICIO 3.6

/*

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

void displayMonth(int year, int month) {
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

int main() {
	int year;
	cout << "Insert an year? ";
	cin >> year;
	displayYear(year);
	return 0;
}

*/

// EXERCICIO 3.7

/*

void factorial_ite(int n) {
	long fac = 1;
	for (int i = 2; i <= n; i++) {
		fac *= i;
	}
	cout << "Factorial iterativo de " << n << "= " << fac << endl;

}

long factorial_rec(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial_rec(n - 1);
	}
}


int main() {
	int n;
	cout << "Insert an integer: ";
	cin >> n;
	factorial_ite(n);
	cout << "Factorial recursivo de " << n << "= " << factorial_rec(n) << endl;
	return 0;
}

*/

// EXERCÍCIO 3.8

/*

int mdc(int m, int n) {
	if ((m % n) == 0) {
		return n;
	}
	else {
		mdc(n, m % n);
	}
}

int main() {
	int m, n;
	cout << "Insert 2 integers ? ";
	cin >> m >> n;
	cout << "MDC(" << m << ", " << n << ") = " << mdc(m, n) << endl;
	return 0;
}

*/

// EXERCÍCIO 3.9

double g(double x) {
	return x*x;
}

double h(double x) {
	return sqrt(4 - g(x));
}

double integrateTR(double f(double), double a, double b, int n) {
	double h = (b - a) / (double) n;
	double area = 0;
	for (int i = 1; i <= n; i++) {
		area += (h / 2)*(f(a + ((i - 1) * h)) + f(a + (i*h)));
	}
	return area;
}

int main() {
	int n;
	cout << "g(x) = x^2" << endl;
	for (int c = 1; c <= 7; c++) {
		n = pow(2, c);
		cout << "n = " << n << " - " << integrateTR(g, 0, 10, n) << endl;
	}
	cout << "h(x) = sqrt(4 - x^2)" << endl;
	for (int c = 1; c <= 7; c++) {
		n = pow(2, c);
		cout << "n = " << n << " - " << integrateTR(h, -2, 2, n) << endl;
	}
	cout << "Area real do semi-circulo de raio 2 = " << 2*pi << endl;
	return 0;
}


