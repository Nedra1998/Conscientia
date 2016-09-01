#ifndef _PESSUM_FILES_CONSCIENTIA_FILES_CONSCIENTIA_H_
#define _PESSUM_FILES_CONSCIENTIA_FILES_CONSCIENTIA_H_
#include <string>
#include <vector>
#include <Windows.h>
#include "../lux_reader.h"
#include "../pessum_core.h"
namespace pessum {
	namespace conscientia {
		namespace advanced {}
		struct Window {
			std::string name;
			int posx, posy, sizex, sizey;
			int cursorx, cursory;
			bool border, title;
		};
		extern int logloc;
		extern std::vector<Window> virtualwindows;
		extern int boundwindow;
		extern int currentbuffer;
		extern HANDLE displaybuffer1, displaybuffer2;
		extern bool seconedbuffer;
		extern _CONSOLE_SCREEN_BUFFER_INFO consoleinfo;

		void InitializeConscientia();
		void GenorateWindow(std::string name = "scr", int sizex = 10, int sizey = 10, int posx = 0, int posy = 0, bool border = true, bool title = false);
		void ClearWindowAll();
		int FindWindowPointer(std::string name = "stdscr");
		void BindWindow(int pointer = 0);
		void ToggleBorder(int pointer = boundwindow);
		void ClearWindow(int pointer = boundwindow);
		void ToggleTitle(int pointer = boundwindow);
		void GetSize(int& x, int& y, int pointer = boundwindow);
		void DrawBorder(int pointer = boundwindow);
		void DrawTitle(int pointer = boundwindow);
		void TerminateWindow(int pointer = boundwindow);
		void TerminateWindowAll();
		char GetChar();
		int CinInt();
		std::string CinString();
		double CinFloat();
		void Print(std::string text = "NULL", int cursorx = -1, int cursory = -1, int pointer = boundwindow);
		void Update();
		void SetConsoleName(std::string consolename = "NULL");
		void WriteOutput(std::string text = "NULL", COORD position = { 0, 0 });
		void TerminateConscientia();
		int FindTextCenter(std::string text = "NULL", int space = 0);
	}
}
#endif // !_PESSUM_FILES_CONSCIENTIA_FILES_CONSCIENTIA_H_