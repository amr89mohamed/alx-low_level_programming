#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {
   char buf[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
   write(2, buf, strnlen(buf,sizeof(buf)));
}

