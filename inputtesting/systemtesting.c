#include <stdio.h>

int main() {
  int get, b;
  char cmd[83];  

  get = getchar();
  while (get != EOF && get != 10) {
    sprintf(cmd, "sh /home/becker/code/c/inputtesting/ls.sh %c", get);
        system(cmd);
    get = getchar();
  }
}