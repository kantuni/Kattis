#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, string> memo;
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
    if (memo.count(note)) {
      cout << memo[note] << " " << tonality << endl;
    } else {
      cout << "UNIQUE" << endl;
    }
  }
  return 0;
}
