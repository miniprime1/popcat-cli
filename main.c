#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32

#include <conio.h>
#include <Windows.h>
#define ClearConsole() system("cls");
#define TimeSleep() Sleep(50);
int ReadKey() { return _getch(); }

#else

#include <unistd.h>
#include <termios.h>
static struct termios old, new;
#define ClearConsole() system("clear");
#define TimeSleep() usleep(50000);
void InitTermios(int echo) { tcgetattr(0, &old); new = old; new.c_lflag &= ~ICANON; new.c_lflag &= echo ? ECHO : ~ECHO; tcsetattr(0, TCSANOW, &new); }
void ResetTermios() { tcsetattr(0, TCSANOW, &old); }
char GETCH_(int echo) { char ch; InitTermios(echo); ch = getchar(); ResetTermios(); return ch; }
int ReadKey() { return GETCH_(0); }

#endif

const char* popcat_openmouth_ascii =
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
"@@@,,,,,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,,.@@@@@@@@\n"
"@@//((///,,,@@@@@@@@@@@@@@@@@@@@@(**,,,,,,@@@@@@@@\n"
"@@((((/(//(/,,@@@@@@@/,,,......,///*,,****@@@@@@@@\n"
"@*(((((((//(((((((((/*,.         ..//(****,@@@@@@@\n"
"@*/((((((((/((((((/,,/##*.   .,*////,....*,,@@@@@@\n"
"@@***((((((((((((//(*.   .,*/(#%%%%%%#(*....,,@@@@\n"
"@@@*,***/(((((((/,....,*(%&@@@@@@@@@@@@@&#(/***.@@\n"
"@@@@,,*,*/((((%#/****/#@@@@@@@@@@@@@@@@@@@@%((/*@@\n"
"@@@@@ *(#####%%(////(&@@@@@@@@@@@@@@@@@@@@@@%#(/*@\n"
"@@@@@@@*#%&&&%((/((#&@@@@@@@@@@@@@@@@@@@@@@@%#(/*@\n"
"@@@@@@@*/%&&&#((/((#@@@&&&&&@@@@@@@@@&&&&&&&%#(//@\n"
"@@@@@@@@(*&&&%#(((((%&&&&&&&&&&&&&&&&&&&&&&%#((/(@\n"
"@@@@@@@@@,*%&%((/(/(((#%%%&&&&&&&&&&&&&&%%##((/*@@\n"
"@@@@@@@@@@*//((///////(((###%%%%%%%%%%%##((((/,@@@\n"
"@@@@@@@@@.*//////////////(((((((#####(((((((*@@@@@\n"
"@@@@@@@@@***///////////(/((((((((((((((((((*,@@@@@\n"
"@@@@@@@@*****///////////((((((((((((((((((/*@@@@@@\n"
"@@@@@@@,*****////////////////(((((((((((((/*(@@@@@\n"
"@@@@@@,******///*///////////((((/(((((((////(@@@@@\n"
"@@@@@@,**********////////////(((/(((((((////(@@@@@\n"
"@@@@@.**************/////////////(((((((////@@@@@@\n"
"@@@@@,***************////////////(((((((/(//@@@@@@\n"
"@@@@@,**************//////////////((/(((////@@@@@@\n"
"@@@@@,***////***//**/**/////////////(///(((/@@@@@@\n"
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

const char* popcat_closemouth_ascii =
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,,,@@@@@@@\n"
"@@@@@*//((//*/@@@@@@@@@@@@@@@@@@@@@@**,,,,,%@@@@@@\n"
"@@@@@*(((////(/*,@@@@@@@@@@@@@@@@@///*,,,**%@@@@@@\n"
"@@@@@*((((((///((((///////**.     .*/******@@@@@@@\n"
"@@@@@(/(((((((//(((((//*..          .,*//**@@@@@@@\n"
"@@@@@@(**((((((///////*(####*       ,#%%#/*,@@@@@@\n"
"@@@@@@@/****(((((((((/,,,((#/,        .....,//@@@@\n"
"@@@@@@@@,,**/((((##%#(*,,,...  ..,////.....,*//*@@\n"
"@@@@@@@@@,/#####%%%%#(///////((((/((((((((((((//(@\n"
"@@@@@@@@@@,(%%%&&&%##///(((((((((((((((((((((((/,@\n"
"@@@@@@@@@@@*#%&&&&###(///((((((((((((((((((((((*#@\n"
"@@@@@@@@@@@@*#&&&&%%((////(((((((((((((((((((/*@@@\n"
"@@@@@@@@@@@@@,(%%&#((////////(((((((((((((((/,@@@@\n"
"@@@@@@@@@@@@@,////////////////(((((((((((((/*,@@@@\n"
"@@@@@@@@@@@@***//////////////((((((((((((((/*,@@@@\n"
"@@@@@@@@@@@***//////////////////(((((((((((/**@@@@\n"
"@@@@@@@@@@(****///////////////////((((((((///*@@@@\n"
"@@@@@@@@@@******////////////////////(((((((//**@@@\n"
"@@@@@@@@@,******////////////////////((((((////(@@@\n"
"@@@@@@@@@********////////////////////(((((////*@@@\n"
"@@@@@@@@.************/////////////////(((((///*@@@\n"
"@@@@@@@@,************////////////////((((/////*@@@\n"
"@@@@@@@@,************////////////////((((/////,@@@\n"
"@@@@@@@@***/*******///////////////////////////,%@@\n"
"@@@@@@@@************//////////////////////////,,@@\n";

void pop(unsigned long long int i) {
    ClearConsole();
    printf("%s", popcat_openmouth_ascii);
    printf("You popped for %lld times!\n", i);
    TimeSleep();
    ClearConsole();
    printf("%s", popcat_closemouth_ascii);
    printf("You popped for %lld times!\n", i);
}

void update() {
    if (false) {
    }
    else if (false) {
    }
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (true) {
		ClearConsole();
		printf("%s", popcat_closemouth_ascii);
		TimeSleep();
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else if (false) {
	}
	else {

	}
}

int main() {
    unsigned long long int i = 0;

	update();

    for (;;) {
        if (ReadKey()) { i++; pop(i); }
    }

    return 0;
}