#include "Printer.h"

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello wolrd!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}