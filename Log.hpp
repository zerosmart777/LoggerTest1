#pragma once
#include <string>
#include <fstream>
using namespace std;

class Log
{
public:
	void write(const string& L_line);
	static Log* instance();
	~Log();

private:
	Log();
	static Log* L_inThis;
	static ofstream L_instance;
};


