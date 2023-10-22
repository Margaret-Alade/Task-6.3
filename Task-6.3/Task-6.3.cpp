// Task-6.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equal_triangle.h"
#include "square.h"
#include "rhomb.h"



void print_info(Figure* figure) {
    figure->print_info();
}

int main() {
    
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    Triangle triangle{ 10, 20, 30, 50, 60, 70 };
    print_info(&triangle);
    Right_triangle right_triangle{ 10, 20, 30, 40, 50 };
    print_info(&right_triangle);
    Isosceles_triangle isosceles_triangle{ 10, 20, 50, 60 };
    print_info(&isosceles_triangle);
    Equal_triangle equal_triangle{ 30 };
    print_info(&equal_triangle);
    Quadrangl quadrangl{ 10, 20, 30, 40, 50, 60, 70, 80 };
    print_info(&quadrangl);
    Restangle restangle{ 10,20 };
    print_info(&restangle);
    Square square{ 20 };
    print_info(&square);
    Parallelogram parallelogram{ 20,30,30,40 };
    print_info(&parallelogram);
    Rhomb rhomb{ 30, 30, 40 };
    print_info(&rhomb);


    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
