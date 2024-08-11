/*
������ 3
��� ����� �������:
�������� �������, ������� ��������� ��������� �� char, �� �������� ����� ������.
������� ������ ���������� true, ���� ������ ������ �������� ���������� ������.

������:

const char* a = "Hello world";
const char* b = "wor";
const char* c = "banana";
std::cout << substr(a,b) << " " << substr(a,c);
// true false

const-������������
const �������� �������������� ����, ����������� � ����������, �������� ������� ������ ��������.
��������, ���� � ���� ��������:
const int a = 2;
�� ������������ �������� ���������� ���������� ��������, � ������ ����
a = 3;
������� � ������ �����������.

���-���� ��� �������� ������:
� ������� ��������� ���������� ���� ������, ��� ������������� �������� -- bool
� ������� �� ���������� ��������� ����� <iostream> � <cstring> ��� ������ ��� ������ �� ��������
� ������� ��������� ����������, �������� �� ������ ������ ���������� ������.
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
