#ifndef _Printer_H_
#define _Printer_H_

class Printer
{
private:
	char str[100];
public:
	void SetString(const char* str);
	void ShowString();
};

#endif