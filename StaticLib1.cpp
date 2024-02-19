// StaticLib1.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"

bool IsPrime(int num) {
	if (num <= 1)
		return false;
	if ((num % 2 == 0)&&(num != 2))
		return false;
	if (num == 2)
		return true;
	for (int i = 3; i < num; i += 2) {
		if (num % i == 0)
			return false;
	}
	return true;
}
