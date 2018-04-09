#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<string, string> to_morse({
    {"A", ".-"},    
    {"B", "-..."},  
    {"C", "-.-."},  
    {"D", "-.."},   
    {"E", "."},     
    {"F", "..-."},  
    {"G", "--."},   
    {"H", "...."},  
    {"I", ".."},    
    {"J", ".---"},  
    {"K", "-.-"},   
    {"L", ".-.."},  
    {"M", "--"},    
    {"N", "-."},    
    {"O", "---"},   
    {"P", ".--."},  
    {"Q", "--.-"},  
    {"R", ".-."},   
    {"S", "..."},   
    {"T", "-"},     
    {"U", "..-"},   
    {"V", "...-"},  
    {"W", ".--"},   
    {"X", "-..-"},  
    {"Y", "-.--"},  
    {"Z", "--.."},  
    {"_", "..--"},  
    {",", ".-.-"},  
    {".", "---."},  
    {"?", "----"},  
  });
  unordered_map<string, string> from_morse({
    {".-",   "A"},
    {"-...", "B"},
    {"-.-.", "C"},
    {"-..",  "D"},
    {".",    "E"},
    {"..-.", "F"},
    {"--.",  "G"},
    {"....", "H"},
    {"..",   "I"},
    {".---", "J"},
    {"-.-",  "K"},
    {".-..", "L"},
    {"--",   "M"},
    {"-.",   "N"},
    {"---",  "O"},
    {".--.", "P"},
    {"--.-", "Q"},
    {".-.",  "R"},
    {"...",  "S"},
    {"-",    "T"},
    {"..-",  "U"},
    {"...-", "V"},
    {".--",  "W"},
    {"-..-", "X"},
    {"-.--", "Y"},
    {"--..", "Z"},
    {"..--", "_"},
    {".-.-", ","},
    {"---.", "."},
    {"----", "?"}
  });
  string c;
  while (getline(cin, c)) {
    string mc, m, len;
    for (char l: c) {
      string code = to_morse[string(1, l)];
      mc += code;
      len += to_string(code.size());
    }
    reverse(len.begin(), len.end());
    int next = 0;
    for (char n: len) {
      int cnt = n - '0';
      string code;
      while (cnt--) {
        code += mc[next];
        next++;
      }
      m += from_morse[code];
    }
    cout << m << "\n";
  }
  return 0;
}
