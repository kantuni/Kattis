#include <stdio.h>
#include <string.h>

int main() {
  size_t size = 1000005;
  char s[size];
  int nop = scanf("%s", s);
  size_t len = strlen(s) + 1, curr = 0;
  char ans[len];
  for (size_t i = 0; i < len; i++) {
    if (s[i] == '<') {
      curr--;
      ans[curr] = '\0';
    } else {
      ans[curr] = s[i];
      curr++;
    }
  }
  printf("%s\n", ans);
  return 0;
}
