#include <stdio.h>
#include <string.h>

int main() {
  size_t size = 1000005;
  char s[size];
  if (scanf("%s", s) == 1) {
    size_t len = strlen(s) + 1;
    char ans[len];
    size_t curr = 0;
    for (size_t i = 0; i < len; i++) {
      if (s[i] == '<') {
        ans[--curr] = '\0';
      } else {
        ans[curr++] = s[i];
      }
    }
    printf("%s\n", ans);
  }
  return 0;
}
