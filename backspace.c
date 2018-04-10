#include <stdio.h>
#include <string.h>

int main() {
  int size = 1000005;
  char s[size];
  if (scanf("%s", s) == 1) {
    int len = strlen(s) + 1;
    char ans[len];
    int curr = 0;
    for (int i = 0; i < len; i++) {
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
