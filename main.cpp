
#define ORI_IMPL
#include "ori.h"

const char* lorem =
        #include "sample_text/lorem.txt"
;

const char* frost =
        #include "sample_text/lorem.txt"
;

const char* iroha =
        #include "sample_text/lorem.txt"
;

int main(int argc, char** argv) {
    const char* str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.\nUt enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\n";
    const char* a   = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz\n";

    if(argc < 2 || argc > 4) {
        std::cerr << "wrong number of args!";
        return -1;
    }
    unsigned right_padding = 0;
    if(argc >= 3) {
        right_padding = std::stoi(argv[2]);
    }

    unsigned hyphenate_cutoffs = false;
    if(argc == 4) {
        hyphenate_cutoffs = std::stoi(argv[3]);
    }
    unsigned indent = std::stoi(argv[1]);
    ori::println(std::cerr, indent*2, right_padding, hyphenate_cutoffs, frost);

    return 0;
}
