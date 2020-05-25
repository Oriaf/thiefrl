#include<locale.h>
#include<ncurses.h>

int main(){	
	setlocale(LC_ALL, ""); //Set the locale to be used
	initscr(); //Initialize a default window the size of the terminal
	clear();

	printw("Ncurses works?\nPress any key to exit");

	getch();

	endwin();
	
	return 0;
}
