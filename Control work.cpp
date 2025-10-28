#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//3
/*
int main() {
    setlocale(LC_ALL, "ru");
    float num1 = 10.5;
    float num2 = 20.75;
    double num3 = 30.125;

    double average = (num1 + num2 + num3) / 3.0;

    cout << "Среднее арифметическое: " << average << endl;

    return 0;
}
*/

//4
/*
int main() {
    setlocale(LC_ALL, "ru");
    int number;
    cout << "Введите целое число: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "чётное" << endl;
    }
    else {
        cout << "нечётное" << endl;
    }

    return 0;
}
*/

//8
/*
int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите целое положительное число N: ";
    cin >> n;

    long long factorial = 1;
    int i = 1;

    while (i <= n) {
        factorial *= i;
        i++;
    }

    cout << "Факториал " << n << "! = " << factorial << endl;

    return 0;
}
*/

//11
/*
void findMax(int arr[], int size) {
    setlocale(LC_ALL, "ru");
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << "Максимальный элемент: " << maxVal << endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(0)); 

    const int SIZE = 8;
    int numbers[SIZE];

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % 100 + 1; 
        cout << numbers[i] << " ";
    }
    cout << endl;

    findMax(numbers, SIZE);

    return 0;
}
*/

//15
/*
int main() {
    setlocale(LC_ALL, "ru");
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;
    int minVal = matrix[0][0];
    int maxVal = matrix[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
            if (matrix[i][j] < minVal) minVal = matrix[i][j];
            if (matrix[i][j] > maxVal) maxVal = matrix[i][j];
        }
    }

    double average = static_cast<double>(sum) / (rows * cols);

    cout << "Сумма всех элементов: " << sum << endl;
    cout << "Среднее арифметическое: " << average << endl;
    cout << "Минимальный элемент: " << minVal << endl;
    cout << "Максимальный элемент: " << maxVal << endl;

    return 0;
}
*/
