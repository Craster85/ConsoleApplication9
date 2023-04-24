#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	float Coast;
	int op;
	cout << "Введите стоимость разговора" << endl;
	cin >> Coast;
	cout << "Введите с какого оператора на какой вы звоните: " << endl;
	cout << "1 - MTS - MTS" << endl;
	cout << "2 - MTS - Beeline" << endl;
	cout << "3 - MTS - Megafone" << endl;
	cout << "4 - Beeline - MTS" << endl;
	cout << "5 - Beeline - Beeline" << endl;
	cout << "6 - Beeline - Megafone" << endl;
	cout << "7 - Megafone - MTS" << endl;
	cout << "8 - Megafone - Beeline" << endl;
	cout << "9 - Megafone - Megafone" << endl;
	cin >> op;
	if (op < 1 || op > 9) {
		cout << "Неверный ввод" << endl;
		return 0;
	}
	else {
		switch (op) {
		case 1: {
			Coast = Coast * 1;
			break;
		}case 2: {
			Coast = Coast * 1.1;
			break;
		}case 3: {
			Coast = Coast * 1.2;
			break;
		}case 4: {
			Coast = Coast * 1.05;
			break;
		}case 5: {
			Coast = Coast * 1;
			break;
		}case 6: {
			Coast = Coast * 1.15;
			break;
		}case 7: {
			Coast = Coast * 1.025;
			break;
		}case 8: {
			Coast = Coast * 1.23;
			break;
		}case 9: {
			Coast = Coast * 1;
			break;
		}
		}
	}
	cout << "Стоимость разговора = " << Coast << endl;
	return 0;
}