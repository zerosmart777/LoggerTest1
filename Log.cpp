#include "pch.h"
#include <iostream>
#include "Log.hpp"

Log* Log::L_inThis = nullptr;
ofstream Log::L_instance;

Log* Log::instance() {
		L_inThis= new Log();
		L_instance.open("error.log");
	return L_inThis;
}

Log::Log()
{
}

void Log::write(const string& L_line) {
	cout << L_line << endl;
	L_instance << L_line << endl;
}

Log::~Log()
{
	L_instance.close();
}
