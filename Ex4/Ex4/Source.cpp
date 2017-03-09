#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

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
	cout << "Choose string type (1 for C-string, 2 for std::string) ? ";
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