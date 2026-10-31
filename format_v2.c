#include <stdio.h>
#include <string.h>

#define MAX_LEN 200

static void log_message(const char *message) {
    fputs("[LOG] ", stdout);

    printf("%s", message);
    putchar('\n');
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fputs("usage: logger <message>\n", stderr);
        return 1;
    }
    if (strnlen(argv[1], MAX_LEN + 1) > MAX_LEN) {
        fputs("error: message too long\n", stderr);
        return 1;
    }
    log_message(argv[1]);
    return 0;
}