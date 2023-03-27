//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//class eq2 {
//private:
//    double a, b, c;
//    double D;
//
//public:
//    eq2(double a1, double b1, double c1) {
//        a = a1; b = b1; c = c1;
//        D = b * b - 4 * a * c;
//    }
//    void set(double a1, double b1, double c1) {
//        a = a1; b = b1; c = c1;
//        D = b * b - 4 * a * c;
//    }
//    double find_X() {
//        if (D < 0) {
//            cout << "Корней нет" << endl;
//            return 0;
//        }
//        else {
//            if (D == 0) {
//                cout << "Корень один: " << endl;
//                double x = (-b - sqrt(D)) / (2 * a);
//                cout << x << endl;
//                return x;
//            }
//            else {
//                cout << "Корней 2, наибольший: " << endl;
//                double x1 = (-b - sqrt(D)) / (2 * a);
//                double x2 = (-b + sqrt(D)) / (2 * a);
//                if (x1 > x2) {
//                    cout << x1 << endl;
//                    return x1;
//                }
//                else {
//                    cout << x2 << endl;
//                    return x2;
//                }
//            }
//        }
//    }
//    double find_Y(double x1) {
//        return a * x1 * x1 + b * x1 + c;
//    }
//};
//
//int main()
//{
//    double a, b, c;
//    cin >> a >> b >> c;
//    eq2 exmpl(a, b, c);
//    exmpl.find_X();
//    cout << exmpl.find_Y(6);
//    return 0;
//}

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std; // 2 ok

class rational {
private:
	int a; // числитель
	int b; // знаменатель
public:
	rational() {}

	rational(int a1, int b1) {
		a = a1;
		b = b1;
		if (b == 0) {
			cout << "Error: division by zero "; // деление на ноль
		}
		else {
			if (a % b == 0 && b != 0) {
				cout << "the answer is an integer " << a / b << " "; // целое число
			}
			else {
				if (a > b && b != 0) {
					a = a - (a / b) * b; // неправильная дробь + сокращение 
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
				if (b > a && b != 0) { // сокращение
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
	void set(int a1, int b1) {
		a = a1;
		b = b1;
		if (b == 0) {
			cout << "Error: division by zero "; // деление на ноль
			return;
		}
		else {
			if (a % b == 0 && b != 0 ) {
				cout << "the answer is an integer " << a / b << " "; // целое число
				return;
			}
			else {
				if (a > b && b != 0) {
					a = a - (a / b) * b; // неправильная дробь + сокращение 
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
				if (b > a && b != 0) { // сокращение
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
	void show() {
		cout << a << "/" << b << endl;
	}

};
int main() {
	int n;
	int a; int b;

	cout << "enter the number of elements ";
	cin >> n;

	rational *mas = new rational[n];

	for (int i = 0; i < n; i++) {

		cout << "enter the numerator and denominator (a b) ";

		cin >> a >> b;
		if (a < 0 && b < 0) {
			a = abs(a);
			b = abs(b);
		}
		if (a < 0 && b > 0) {
			a = abs(a);
			b = abs(b);
			cout << '-';
		}
		if (b < 0 && a > 0) {
			a = abs(a);
			b = abs(b);
			cout << '-';
		}
		mas[i] = rational(a, b);

		mas[i].show();
	}
	delete [] mas;
	return 0;
}


//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	int a, b;
//	cin >> a >> b;
//	for (int i = a; i > 0; i--) {
//		int nod;
//		if (a % i == 0 && b % i == 0) {
//			nod = i;
//			a = a / nod;
//			b = b / nod;
//		}
//		
//	}
//	cout << a << '/' << b;
//	return 0;
//}