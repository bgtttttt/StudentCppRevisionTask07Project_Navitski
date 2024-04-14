﻿#include "tasks.h"

/*	Task 01. Chess & King [шахматный король]
*
*	Шахматный король (chess king) ходит по горизонтали, вертикали и диагонали,
*	но только на 1 клетку. Даны две различные клетки шахматной доски, определите,
*	может ли король попасть с первой клетки на вторую одним ходом.
*
*	Примечание
*	1) Чтобы увидеть решение и разработать алгоритм, нарисуйте себе шахматную доску
*	и поставьте в клетках соответствующие координаты x и y.
*	2) Не забудьте "защиту от дурака". Если пользователь задаёт неверные коориднаты клеток,
*	то функция должна возвратить булевское значение false.
*	3) Для решения достаточно использовать арифметические операции, операции отношения,
*	логические операции и условную операцию (?:).
*
*	Формат входных данных [input]
*	Функция принимает на вход четыре числа от 1 до 8 каждое, задающие номер столбца
*	и номер строки сначала для первой клетки (x1, y1), а потом для второй клетки (x2, y2).
*
*	Формат выходных данных [output]
*	Функция должна возвратить булевское значение - результат решения.
*
*	[ input 1]: 4 4 5 5
*	[output 1]: true
*
*	[ input 2]: 4 4 4 8
*	[output 2]: false
*/

bool task01(int x1, int y1, int x2, int y2) {
	if ((x1 < 1 || y1 < 1 || x2 < 1 || y2 < 1 ||
		x1 > 8 || y1 > 8 || x2 > 8 || y2 > 8) || 
		((x1 == x2) && (y1 == y2))) {
		return false;
	}
	return (abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1);
}