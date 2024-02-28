#define _CRT_SECURE_NO_WARNINGS // ������������� �������������� ������������
#include <stdio.h> // ����������� ���������� ��� ������ � ������/�������
#include <stdlib.h> // ����������� ���������� ��� ������ � �������, �������, ���������� �������
#include <locale.h> // ����������� ���������� ��� ������ � ������������

int main() {
    setlocale(LC_ALL, "Rus"); // ��������� ������� ������

    FILE* f1, * f2; // ���������� ���������� �� �����
    int k, i = 0; // ���������� ���������� ��� ������ ������ � ��������
    char line[256]; // ���������� ������� �������� ��� �������� ������

    printf("������� ����� ������ k: "); // ����� ��������� � ����� ������ ������
    scanf ("%d", &k); // ���������� ������ ������

    f1 = fopen("F1.txt", "r"); // �������� ����� F1.txt ��� ������
    f2 = fopen("F2.txt", "w"); // �������� ����� F2.txt ��� ������

    if (f1 == NULL || f2 == NULL) { // �������� ���������� �������� ������
        printf("������ ��� �������� �����.\n"); // ����� ��������� �� ������, ���� ����� �� ���������
        return 1; // ���������� ��������� � ����� ������ 1
    }

    while (fgets(line, sizeof(line), f1)) { // ������ ����� �� ����� F1.txt, ���� ��� �� ����������
        i++; // ���������� �������� �� 1
        if (i >= k && i <= k + 3) { // ���� ����� ������� ������ ������ � �������� �� k �� k+3
            fputs(line, f2); // ������ ������� ������ � ���� F2.txt
        }
    }

    fclose(f1); // �������� ����� F1.txt
    fclose(f2); // �������� ����� F2.txt

    return 0; // ���������� ��������� � ����� ������ 0
}