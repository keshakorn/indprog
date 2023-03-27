#include "rational.h"
#include <iostream>
rational:: rational(int a1, int b1) {
	a = a1;
	b = b1;
	if (b == 0) {
		cout << "Error: division by zero "; // ??????? ?? ????
	}
	else {
		if (a % b == 0 && b != 0) {
			cout << "the answer is an integer " << a / b << " "; // ????? ?????
		}
		else {
			if (a > b && b != 0) {
				a = a - (a / b) * b; // ???????????? ????? + ?????????? 
				if (b > a && b != 0) {
					int nod;
					for (int i = a; i > 0; i--) {
						if (a % i == 0 && b % i == 0) {
							nod = i;
							a = a / nod;
							b = b / nod;
							break;
						}
					}
				}
			}
			if (b > a && b != 0) { // ??????????
				int nod;
				for (int i = a; i > 0; i--) {
					if (a % i == 0 && b % i == 0) {
						nod = i;
						a = a / nod;
						b = b / nod;
						break;
					}
				}
			}
		}
	}
}
void rational::set(int a1, int b1) {
	a = a1;
	b = b1;
	if (b == 0) {
		cout << "Error: division by zero "; // ??????? ?? ????
		return;
	}
	else {
		if (a % b == 0 && b != 0) {
			cout << "the answer is an integer " << a / b << " "; // ????? ?????
			return;
		}
		else {
			if (a > b && b != 0) {
				a = a - (a / b) * b; // ???????????? ????? + ?????????? 
				if (b > a && b != 0) {
					int nod;
					for (int i = a; i > 0; i--) {
						if (a % i == 0 && b % i == 0) {
							nod = i;
							a = a / nod;
							b = b / nod;
							break;
						}
					}
				}
			}
			if (b > a && b != 0) { // ??????????
				int nod;
				for (int i = a; i > 0; i--) {
					if (a % i == 0 && b % i == 0) {
						nod = i;
						a = a / nod;
						b = b / nod;
						break;
					}
				}
			}
		}
	}
}
void rational::show() {
	cout << a << "/" << b << endl;
}
