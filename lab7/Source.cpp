#include <iostream>
#include <stack>   // Бібліотека для роботи зі стеком
#include <Windows.h> // Для української мови

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    stack<int> s; // Оголошення стеку
    int n, val;

    cout << "Введіть кількість елементів стеку: ";
    cin >> n;

    // 1. Заповнення стеку
    cout << "Введіть " << n << " цілих чисел:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        s.push(val); // Додавання елемента на вершину (push)
    }

    // 2. Обробка стеку (Варіант 4: сума елементів > 5)
    int sum = 0;

    cout << "\n--- Обробка стеку ---\n";

    // Поки стек не порожній
    while (!s.empty()) {
        int current = s.top(); // Отримуємо верхній елемент (без видалення)

        // Перевірка умови варіанту
        if (current > 5) {
            sum += current;
            cout << "Елемент " << current << " > 5. Додаємо до суми.\n";
        }
        else {
            cout << "Елемент " << current << " <= 5. Пропускаємо.\n";
        }

        s.pop(); // Видаляємо верхній елемент (переходимо до наступного)
    }

    cout << "\nСума елементів, які більші 5: " << sum << endl;

    system("pause");
    return 0;
}