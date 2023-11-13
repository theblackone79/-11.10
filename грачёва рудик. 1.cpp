#include<iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int visitors, age, min_age = 100, mid_age = 0, max_age = 0;
    int sum = 0;
    cout << "Сколько людей посетило спортзал: ";
    cin >> visitors;
    for (int i = 1; i <= visitors; i++) {
        cout << " Введите возраст " << i << " посетителя: ";
        cin >> age;
        if (max_age < age) {
            max_age = age;
        }
        if (min_age > age) {
            min_age = age;
        }

        sum += age;


        mid_age = sum / visitors;
    }
    cout << "Максимальный возраст из всех посетителей = " << max_age << endl;
    cout << "Минимальный возраст из всех посетителей = " << min_age << endl;
    cout << "Средний возраст из всех посетителей = " << mid_age << endl;
    return 0;
}