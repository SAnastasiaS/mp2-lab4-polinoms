#include "list.h"
#include "polinom.h"
#include <iostream>

using namespace std;

void main()
{
	try
	{
		/*List c;
		List::Insert(c.GetHead(), new Node(1));
		List::Insert(c.GetHead(), new Node(2));
		List::Insert(c.GetHead(), new Node(3));
		List::Insert(c.GetHead()->next, new Node(Monom(4, 2, 0, 0)));
		List::DeleteNext(c.GetHead()->next->next->next);
		Node* current = c.GetHead()->next;
		while (current!=c.GetHead())
		{
			cout << current->m << endl;
			current = current->next;
		}
		cout << endl;

		List d(c);
		current = d.GetHead()->next;
		while (current!=d.GetHead())
		{
			cout << current->m << endl;
			current = current->next;
		}*/

		Monom m(12, 1, 2, 3), m2(2, 1, 0, 3), m3(1, 3, 0, 3), m4(-1, 3, 0, 3);
		cout << m.GetCoef() << " " << m.GetX() << " " << m.GetY() << " " << m.GetZ() <<endl;
		cout<<m<<endl;
		Polinom p;
		p.AddMonom(m);
		p.AddMonom(m2);
		p.AddMonom(m3);
		p.AddMonom(m4);

		Polinom q;
		q.AddMonom(Monom(-2.0, 1, 0, 3));
		q.AddMonom(Monom(1.0, 4, 0, 0));
		q.AddMonom(Monom(3.0, 1, 2, 3));

		Polinom sum = p+q;
		int b = 1;
		//Monom m1 = 2*m;
		//cout<<m1<<endl;

	}
	catch (const char* error)
	{
		cout<<error<<endl;
	}

}