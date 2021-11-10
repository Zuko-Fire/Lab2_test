#include "Interface.h"
#include "Ball.h"
#include "Cone.h"
#include "Parallelepiped.h"
#include "Body.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void Interface::go()
{
	
	while (true)
	{
	
		cout << "1.Создать параллелепипед" << endl;
		cout << "2.Создать конус" << endl;
		cout << "3.Создать шар" << endl;
		cout << "4.Завершить работу" << endl;
		int i = 0;
		cin >> i;
		switch (i)
		{
		case(1):
			{
				double a, b, h;
				cout << "Введите первую сторону основания" << endl;
				cin >> a;
				cout << "Введите вторую сторону основания" << endl;
				cin >> b;
				cout << "Введите высоту" << endl;
				cin >> h;
				Parallelepiped p (a,b,h);
				cout << "Параллелепипед создан:" << "Стороны: " << p.getA() << " " << p.getB() << " Высота: " << p.getH() << " Площадь: " << p.getSquare() << " Объем: " << p.getVolume() << endl;
				break;
				

			}
		case(2): 
		{
			double r, h;
			cout << "Введите радиус основания" << endl;
			cin >> r;
			cout << "Введите высоту" << endl;
			cin >> h;
			Cone c(h, r);
			cout << "Конус создан: " << "Радиус основания:  "<<c.getR() <<" Высота: "<< c.getH()<< " Площадь: " << c.getSquare() << " Объем: " << c.getVolume() << endl;
		}
		case(3):
		{
			double r;
			cout << "Введите радиус" << endl;
			cin >> r;
			Ball b(r);
			cout << "Шар создан: " << "Радиус: "<<b.getR() << " Площадь: " << b.getSquare() << " Объем: " << b.getVolume() << endl;
		}
		case(4):
			return;
		}
		
	}
}
