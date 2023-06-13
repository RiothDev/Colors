#include <stdio.h>

#define BLACK_COLOR "\x1b[30m"
#define RED_COLOR "\x1b[31m"
#define GREEN_COLOR "\x1b[32m"
#define YELLOW_COLOR "\x1b[33m"
#define BLUE_COLOR "\x1b[34m"
#define MAGENTA_COLOR "\x1b[35m"
#define CYAN_COLOR "\x1b[36m"
#define WHITE_COLOR "\x1b[37m"
#define RESET_COLOR "\x1b[0m"

void SetConsoleColor(const char *color) {
    printf("%s", color);
}