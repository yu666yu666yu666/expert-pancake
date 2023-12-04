// strbuf_test.c
#include <stdio.h>
#include <string.h>

int main() {
  char str[6] = "xiyou";
  strcat(str, "linux");
  printf("%s\n", str);
}