// Plogtest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <plog/Log.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char newname[255] = "";
	char logname[255] = "";
	time_t t = time(0); 
	strftime( newname, 64, "%Y-%m-%d-%H-%M-%S",localtime(&t) ); 
	strcat(newname, "-log.txt");
	strcpy(logname, ".\\log\\");
	strcat(logname, newname);
	plog::init(plog::debug, logname); 
	while(1)
	{
		LOG_INFO<<"Init";
	}
	return 0;
}

