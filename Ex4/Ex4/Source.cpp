#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

/*

EXERCICIO 4.1

bool isHydroxide(char compound[]) {
	int len = strlen(compound);
	if ((compound[len - 2] == 'O') && (compound[len - 1] == 'H')) {
		return true;
	}
	else {
		return false;
	}
}

bool isHydroxide(string compound) {
	int len = compound.length();
	if ((compound[len - 2] == 'O') && (compound[len - 1] == 'H')) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	bool finished = false;
	char comp[7];
	string compd;
	int type;
	cout << "Choose string type (1 for C-string, 2 for stl string) ? ";
	cin >> type;
	if (type == 1) {
		while (!finished) {
			cout << "Insert compound name ? ";
			cin >> comp;
			if (strcmp(comp, "0") == 0) {
				finished = true;
				cout << "Finished" << endl;
				break;
			}
			if (isHydroxide(comp)) {
				cout << "Hydroxide" << endl;
			}
			else {
				cout << "Not hydroxide" << endl;
			}
		}
	}
	else {
		while (!finished) {
			cout << "Insert compound name ? ";
			cin >> compd;
			if (compd == "0") {
				finished = true;
				cout << "Finished" << endl;
				break;
			}
			if (isHydroxide(compd)) {
				cout << "Hydroxide" << endl;
			}
			else {
				cout << "Not hydroxide" << endl;
			}
		}
	}
	return 0;
}

*/

/* EXERCICIO 4.2


bool sequenceSearch(string s, int nc, char c) {
	bool found = false;
	int n = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s.at(i) == c) {
			n++;
		}
		else {
			n = 0;
		}
		if (n == nc) {
			found = true;
			break;
		}
	}
	return found;
}

int main() {
	string s;
	int nc;
	char c;
	cout << "Insira a string a procurar, o n. de carateres a procurar e o carater." << endl;
	cin >> s >> nc >> c;
	if (sequenceSearch(s, nc, c)) {
		cout << "Found" << endl;
	}
	else cout << "Not found" << endl;
	return 0;
}

*/

/* EXERCICIO 3

void decompose(string compound) {
	bool nextElem = false;
	cout << "Elementos presentes em " << compound << ": ";
	for (int i = 0; i < compound.size(); i++) {

		char curr = compound.at(i);

		if (curr >= 'A' && curr <= 'Z') {
			if (nextElem) {
				cout << ", ";
			}
			cout << compound.at(i);
			nextElem = true;

		} else if(curr >= 'a' && curr <= 'z') {
			cout << curr;
			nextElem = true;

		} else if (curr >= '0' && curr <= '9') {
			nextElem = true;
		}

	}
	cout << endl;
}

int main() {
	string comp;
	cout << "Insira o composto: ";
	cin >> comp;
	decompose(comp);
	return 0;
}

*/


/*EXERCICIO 4
   string normalizeName(string name) {
   string remove[6] = { "DE", "DO", "DA", "DAS", "DOS", "E" };

   name = name.substr(name.find_first_not_of(' '));
   name = name.substr(0, name.find_last_not_of(' ') + 1);

   for (int i = 0; i < name.size(); i++) {
	   name.at(i) = toupper(name.at(i));
   }

   for (int i = 0; i < size(remove); i++) {
	   string part = remove[i];
	   while (name.find(part) != -1) {
		   if (name.at(name.find(part) - 1) < 'a' && name.at(name.find(part) - 1) > 'Z' && name.at(name.find(part) + part.size() + 1) < 'a' && name.at(name.find(part) + part.size()) > 'z' + 1)
		   name = name.substr(0, name.find(part)) + name.substr(name.find(part) + part.size());
	   }
   }
   int n = name.size() - 1;
   int i = 0;
   while (i < n) {
	   if (name.at(i) == ' ' && name.at(i + 1) == ' ') {
		   int numOfSpaces = name.substr(i).find_first_not_of(' ');
		   name = name.substr(0, i + 1) + name.substr(i + numOfSpaces);
		   n = name.size() - 1;
	   }
	   i++;
   }

   return name;
}



int main() {
	cout << normalizeName(" DE omf  Tiago de   Fragoso dos eas e  ") << endl;
	return 0;
}
*/


/*EXERCICIO 5


struct Fraction {
	int numerator;
	int denominator;
};

Fraction readFraction() {
	int n, d;
	char sep;
	Fraction frac;
	cout << "Insira uma fracao: ";
	cin >> n >> sep >> d;
	if (!cin.fail() && sep == '/'){
		frac.numerator = n;
		frac.denominator = d;
	}
	else {
		frac.denominator = 0;
		frac.numerator = 0;
	}
	return frac;
}

void writeFraction(Fraction frac) {
	cout << frac.numerator << "/" << frac.denominator << endl;
}

Fraction reduceFraction(Fraction frac) {
	int a = frac.numerator;
	int b = frac.denominator;
	int q, r;
	while (b != 0) {
		q = a / b;
		r = a % b;
		a = b;
		b = r;
	}
	frac.numerator /= a;
	frac.denominator /= a;
	return frac;
}

Fraction somaSub(Fraction frac1, Fraction frac2, int option) {
	Fraction result;
	if (frac1.denominator == frac2.denominator) {
		result.denominator = frac1.denominator;
	}
	else {
		frac1.numerator *= frac2.denominator;
		frac2.numerator *= frac1.denominator;
		int p = frac2.denominator;
		frac2.denominator *= frac1.numerator;
		frac1.numerator *= p;
	}

	switch (option) {
	case 1:
		result.numerator = frac1.numerator + frac2.numerator;
		break;
	case 2:
		result.numerator = frac1.numerator - frac2.numerator;
	}

	return result;
}

Fraction multDiv(Fraction frac1, Fraction frac2, int option){
	Fraction result;
	switch (option) {
	case 4:
		int p = frac2.numerator;
		frac2.numerator = frac2.denominator;
		frac2.denominator = p;
	}
	result.numerator = frac1.numerator * frac2.numerator;
	result.denominator = frac1.denominator * frac2.denominator;
	return result;
}



int main() {
	int validOption = false;
	Fraction result;
	while (!validOption) {
		cout << "MENU:" << endl;
		cout << "1. Soma" << endl;
		cout << "2. Subtracao" << endl;
		cout << "3. Multiplicacao" << endl;
		cout << "4. Divisao" << endl;
		cout << "0. Sair" << endl;
		cout << endl << "Escolha a opcao pretendida : ";
		int option;
		cin >> option;
		switch (option) {
		case 1: case 2:
			result = somaSub(readFraction(), readFraction(), option);
			validOption = true;
			break;
		case 3: case 4:
			result = multDiv(readFraction(), readFraction(), option);
			validOption = true;
			break;
		case 0:
			exit(0);
			validOption = true;
			break;
		default:
			cout << "Opcao ivnalida." << endl;
		}
	}
	result = reduceFraction(result);
	writeFraction(result);
	return 0;
}

*/
/* EXERCICIO 6
void readIntArray(int a[], int nElem) {
	for (int i = 0; i < nElem; i++) {
		cout << i << " - ";
		cin >> a[i];
	}
}

int searchValueInIntArray(const int a[], int nElem, int value) {
	int npos = -1;
	for (int i = 0; i < nElem; i++) {
		if (a[i] == value) {
			npos = i;
			break;
		}
	}
	return npos;
}

int searchMultValuesInIntArray(const int a[], int nElem, int value, int index[]) {
	int nValidElem = 0;
	for (int i = 0; i < nElem; i++) {
		if (a[i] == value) {
			index[nValidElem] = i;
			nValidElem++;
		}
	}

	return nValidElem;
}

int main() {
	int nElem;
	int val;

	cout << "Insira o n. de elementos: ";
	cin >> nElem;

	int *a = new int[nElem];
	int *i = new int[nElem];

	readIntArray(a, nElem);

	cout << "Insira o valor a procurar: ";
	cin >> val;

	cout << searchMultValuesInIntArray(a, nElem, val, i) << endl;

	return 0;
}

*/

/*

void readIntVector(vector<int> &v) {
	int next;
	cout << "0 - ";
	while (true) {
		cin >> next;
		if (cin.eof()) {
			cin.clear();
			break;
		}
		else {

			v.push_back(next);
			cout << v.size() << " - ";
		}
	}
}

vector<int> searchMultValuesInIntVector(const vector<int> &v, int value) {
	vector<int> index;
	for (int i = 0; i < v.size(); i++) {
		if (v.at(i) == value) {
			index.push_back(i);
		}
	}
	return index;
}

int main() {
	vector<int> vec;
	int val;
	readIntVector(vec);

	cout << "Insira o valor a procurar: ";
	cin >> val;

	cout << "Foram encontradas " << searchMultValuesInIntVector(vec, val).size() << " correspondecias." << endl;

	return 0;
}

*/

/*

void bubblesort(vector<string> &v) {
	int len = v.size();

	while (len > 1) {

		len--;

		for (int i = 0; i < len; i++) {

			if (v.at(i).compare(v.at(i + 1)) > 0) {
				string temp = v.at(i + 1);

				v.at(i + 1) = v.at(i);

				v.at(i) = temp;
			}
		}
	}
}

int main() {
	vector<string> vec;
	string str;

	cout << "Insira uma string (Ctrl-Z para terminar): ";
	while (getline(cin, str)) {
		if (!str.empty())
		vec.push_back(str);
		cout << "Insira uma string (Ctrl-Z para terminar): ";
	}
	cin.clear();

	if (!vec.empty()) {

		bubblesort(vec);

		cout << "Vetor ordenado com sucesso!" << endl;

		for (int i = 0; i < vec.size(); i++) {
			cout << vec.at(i) << endl;
		}
	}
	else {
		cout << "Vetor vazio." << endl;
	}
	return 0;
}


*/

/* EXERCICIO 9
int binarySearch(const vector<string> &v, string value) {
	int top = v.size() - 1;
	int bottom = 0;
	int middle;
	int pos = -1;
	bool found = false;

	while ((bottom <= top) && !found) {
		middle = (bottom + top) / 2;
		if (value == v.at(middle)) {
			pos = middle;
			found = true;
		}
		else if (value < v.at(middle)) {
			top = middle - 1;
		}
		else {
			bottom = middle + 1;
		}
	}

	return pos;

}

int main() {
	vector<string> vec;
	string str;

	cout << "Insira uma string (Ctrl-Z para terminar): ";
	while (getline(cin, str)) {
		if (!str.empty())
			vec.push_back(str);
		cout << "Insira uma string (Ctrl-Z para terminar): ";
	}
	cin.clear();

	if (!vec.empty()) {

		bubblesort(vec);

		cout << "Vetor ordenado com sucesso!" << endl;

		cout << "Insira a string a procurar: ";
		cin >> str;

		int ret = binarySearch(vec, str);

		if (ret != -1) {
			cout << "O elemento encontra-se no indice " << ret << "." << endl;
		}
		else {
			cout << "O elemento nao foi encontrado." << endl;
		}
	}
	else {
		cout << "Vetor vazio." << endl;
	}

	return 0;
}

*/

/* EXERCICIO 13

int main() {
	ifstream nomes;
	ofstream nomes_sorted;
	vector<string> vnomes;
	string next;
	string path;
	string newpath;

	cout << "Insira o nome do ficheiro: ";
	cin >> path;

	nomes.open(path);

	if (nomes.fail()) {
		cerr << "Error opening input file. \n";
		exit(1);
	}

	while (nomes >> next) {
		vnomes.push_back(next);
	}

	nomes.close();

	newpath = path.substr(0, path.find_first_of('.'));
	newpath.append("_sorted.txt");

	sort(vnomes.begin(), vnomes.end());

	nomes_sorted.open(newpath);
	if (nomes_sorted.fail()) {
		cerr << "Error opening output file.\n";
		exit(1);
	}

	for (int i = 0; i < vnomes.size(); i++){
		nomes_sorted << vnomes.at(i) << endl;
}
	nomes_sorted.close();
	cout << "Operacao concluida com sucesso." << endl;

	return 0;
}

*/