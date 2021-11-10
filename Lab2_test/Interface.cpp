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
	
		cout << "1.������� ��������������" << endl;
		cout << "2.������� �����" << endl;
		cout << "3.������� ���" << endl;
		cout << "4.��������� ������" << endl;
		int i = 0;
		cin >> i;
		switch (i)
		{
		case(1):
			{
				double a, b, h;
				cout << "������� ������ ������� ���������" << endl;
				cin >> a;
				cout << "������� ������ ������� ���������" << endl;
				cin >> b;
				cout << "������� ������" << endl;
				cin >> h;
				Parallelepiped p (a,b,h);
				cout << "�������������� ������:" << "�������: " << p.getA() << " " << p.getB() << " ������: " << p.getH() << " �������: " << p.getSquare() << " �����: " << p.getVolume() << endl;
				break;
				

			}
		case(2): 
		{
			double r, h;
			cout << "������� ������ ���������" << endl;
			cin >> r;
			cout << "������� ������" << endl;
			cin >> h;
			Cone c(h, r);
			cout << "����� ������: " << "������ ���������:  "<<c.getR() <<" ������: "<< c.getH()<< " �������: " << c.getSquare() << " �����: " << c.getVolume() << endl;
		}
		case(3):
		{
			double r;
			cout << "������� ������" << endl;
			cin >> r;
			Ball b(r);
			cout << "��� ������: " << "������: "<<b.getR() << " �������: " << b.getSquare() << " �����: " << b.getVolume() << endl;
		}
		case(4):
			return;
		}
		
	}
}
