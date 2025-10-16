#include <iostream>
using namespace std;
/*
int main() {
	setlocale(LC_ALL, "ru");
	int a, b, c, max;
	cout << "Введите три числа: ";
	cin >> a >> b >> c;
	max = a;
	if (a < b) {
		max = b;
	} if (max < c) {
		max = c;
	}
	cout << max;
	return 0;
}
*/

/*
int main() {
	setlocale(LC_ALL, "ru");
	int N;
	cout << "ведите размер таблицы: ";
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cout << i * j << "\t";
		}
		cout << endl;
	}
	return 0;
}
*/

/*
int main() {
	setlocale(LC_ALL, "ru");
	int count;
	cout << "Введите число: ";
	cin >> count;
	if ((count % 3 == 0) && (count % 5 == 0)) {
		cout << "FizzBuzz";
	}
	else if (count % 3 == 0) {
		cout << "Fizz";
	}
	else if (count % 5 == 0) {
		cout << "Buzz";
	}
	else {
		cout << count;
	}
	return 0;
}
*/

/*
int main() {
	int count;
	int fact = 1;
	setlocale(LC_ALL, "ru");
	cout << "Введите число: ";
	cin >> count;

	for (int i = 1; i <= count; i++) {
		fact *= i;
	}
	cout << fact;
	return 0;
}
*/

int main() {
	setlocale(LC_ALL, "ru");
	int N;
	cout << "Введите число: ";
	cin >> N;

	for (int i = 1; i <= N; i++) {
		if (i % 15 == 0) {
			cout << " ThreeeFive";
		}
		else if (i % 3 == 0) {
			cout << "Three";
		}
		else if (i % 5 == 0) {
			cout << "Five";
		}
		else {
			cout << i;
		}
		if (i < N) {
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}
