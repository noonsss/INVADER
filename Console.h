

#include <windows.h>
#include <wincon.h>

typedef struct{  
	int x;
	int y;
} UPOINT;


void InitConsole();
void gotoxy(UPOINT pt);
void ClearScreen();
//아 왜 안올라가냐고