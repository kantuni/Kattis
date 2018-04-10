#include <stdio.h>

int main() {
  char s[1000005];
  int len = 0;
  while (1) {
    char c = getchar_unlocked();
    if (c == EOF) {
      s[len++] = '\0';
      break;
    }
    s[len++] = c;
  }
  char ans[len];
  int curr = 0;
  for (int i = 0; i < len; i++) {
    if (s[i] == '<') {
      ans[--curr] = '\0';
    } else {
      ans[curr++] = s[i];
    }
  }
  printf("%s", ans);
  return 0;
}
