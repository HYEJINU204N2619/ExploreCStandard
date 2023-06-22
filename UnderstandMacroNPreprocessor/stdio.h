#ifndef STDIO_H
#define STDIO_H

//Need a system call library to call the 'write' system call.
#include<io.h> 

int printf(const char* args) {
	const char* p = args;
	int filehandler = 0;
	//int filehandler = 1;
	while (*p != '\0') {
		char c = *p;
		_write(filehandler, &c, 1);
		p++;
	}
	return 0;
}

#endif