#ifndef _PESSUM_CONSCIENTIA_H_
#define _PESSUM_CONSCIENTIA_H_
#include <string>
#include <vector>
#include <Windows.h>
namespace pessum {
	namespace conscientia {
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
		extern HANDLE loadbuffer, displaybuffer;
		extern _CONSOLE_SCREEN_BUFFER_INFO consoleinfo;
		extern int firstpage, firstlist, firstitem;
		extern std::vector<int> loadingbars;
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
	}
}
#endif // !_PESSUM_CONSCIENTIA_H_