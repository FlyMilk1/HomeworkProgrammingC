#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) \
    void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(quit, external) {
    printf("Executing external quit command\n");
}

DEFINE_COMMAND(start, internal) {
    printf("Executing internal start command\n");
}

int main() {
    external_quit_command();
    internal_start_command();
    return 0;
}
