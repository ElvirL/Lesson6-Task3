/*
Задача 3
Что нужно сделать:
Написать функцию, которая принимает указатель на char, по которому лежит строка.
Функция должна возвращать true, если вторая строка является подстрокой первой.

Пример:

const char* a = "Hello world";
const char* b = "wor";
const char* c = "banana";
std::cout << substr(a,b) << " " << substr(a,c);
// true false

const-квалификатор
const является квалификатором типа, применяемым к переменным, значения которых нельзя изменять.
Например, если в коде написать:
const int a = 2;
то впоследствии значение переменной невозможно изменить, а запись вида
a = 3;
приведёт к ошибке компилятора.

Чек-лист для проверки задачи:
• Функция принимает корректные типы данных, тип возвращаемого значения -- bool
• Функция не использует библиотек кроме <iostream> и <cstring> или другую для работы со строками
• Функция корректно определяет, является ли вторая строка подстрокой первой.
*/

#include <iostream>
#include <cstring>

using namespace std;

bool substr(const char* a, const char* b){
    while (*a != '\0'){
        const char* c = b;
        while (*a == *c){
            if (*a == *c){
            a = a + 1;
            c = c + 1;
            }
            if (*c == '\0'){
                return true;
            }
            if (*a == '\0'){
                return false;
            }
        }
        a = a + 1;
    }
    return false;
}

int main(){
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "he";
    cout << substr(a,b) << " " << substr(a,c);
}
