#include <stdio.h>
#include <string.h>

int main() {
  char s[1000005];
  int nop = scanf("%s", s);
  int len = strlen(s) + 1;  
  char ans[len];
  int curr = 0;
  for (int i = 0; i < len; i++) {
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
