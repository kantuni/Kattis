#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<string, string> memo;
  memo["A#"] = "Bb";
  memo["Bb"] = "A#";
  memo["C#"] = "Db";
  memo["Db"] = "C#";
  memo["D#"] = "Eb";
  memo["Eb"] = "D#";
  memo["F#"] = "Gb";
  memo["Gb"] = "F#";
  memo["G#"] = "Ab";
  memo["Ab"] = "G#";
  string note, tonality;
  int t = 1;
  while (cin >> note >> tonality) {
    cout << "Case " << t++ << ": ";
    if (memo.count(note) > 0) {
      cout << memo[note] << " " << tonality << "\n";
    } else {
      cout << "UNIQUE" << "\n";
    }
  }
  return 0;
}
