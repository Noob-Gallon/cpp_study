#include "PrintData.h"

int main()
{
	PrintData* ppd = new PrintData();
	ppd->myprint(999);

	delete ppd;
	
	cout << "Hello!" << endl;

	return 0;
}