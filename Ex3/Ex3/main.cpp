#include <iostream>
#include <iomanip>
using namespace std;

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
*/

/* VERIFICAR SE UM NÚMERO É PRIMO

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

bool readFracc(int &num, int &den) {
	int n, d;
	char sep;
	cin >> n >> sep >> d;
	if (!cin.fail() && sep == '/') {
		*num = n;
		*den = d;
		return true;
	}
	else {
		*num = 0;
		*den = 0;
		return false;
	}
}

int main() {
	int numerator, denominator;
	readFracc(&numerator, &denominator);
	cout << numerator << "/" << denominator << endl;
	return 0;
}