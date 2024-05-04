/* Задача 1.2: Создайте структуру для хранения информации о банковском счёте. Она должна хранить номер счёта (целое число), имя владельца (строка) и количество денег на счету (дробное число).
Создайте функцию для изменения баланса счёта.Функция должна принимать экземпляр структуры банковского счёта и новую сумму.
Попросите пользователя заполнить поля экземпляра структуры, сообщить новый баланс счёта и выведите обновлённый экземпляр структуры на консоль.*/

#include <iostream>
#include <string>

struct client_bill
{
    int account_number;
    std::string name;
    float account_balance;
};

void update_inform(client_bill& new_client, int new_balance)
{
    new_client.account_balance = new_balance;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    client_bill client;
    float new_balance;
    std::cout << "Введите номер счета: ";
    std::cin >> client.account_number;
    std::cout << "Введите имя владельца счета: ";
    std::cin >> client.name;
    std::cout << "Введите баланс: ";
    std::cin >> client.account_balance;
    std::cout << "Введите обновленный баланс: ";
    std::cin >> new_balance;

    update_inform(client, new_balance);

    std::cout << "Ваш счет: " << client.name << ", " << client.account_number << ", " << client.account_balance << std::endl;
}
