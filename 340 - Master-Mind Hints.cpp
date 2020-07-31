#include <iostream>

#include <vector>

using namespace std;

int main() {
  int n;
  int numberGame = 0;
  while (cin >> n)
    if (n == 0)
      break;
    else {
      numberGame++;
      vector < int > secret;
      vector < int > guess;

      for (int i = 0; i < n; i++) {
        int z;
        cin >> z;
        secret.push_back(z);
      }
      int sd = 0;
      while (true) {
        int d;
        cin >> d;
        if (d > 0) {
          guess.push_back(d);
        }
        if (d == 0) {
          sd++;
        }
        if (sd == n) {
          break;
        }
      }
      cout << "Game " << numberGame << ":" << endl;

      while (guess.size() != 0) {
        int strong = 0;
        int weak = 0;
        vector < int > boolGuess;
        vector < int > boolSecret;

        for (int i = 0; i < n; i++) {
          boolGuess.push_back(0);
          boolSecret.push_back(0);
        }

        for (int i = 0; i < secret.size(); i++) {
          for (int j = 0; j < n; j++) {
            if (secret[i] == guess[j] and i == j) {
              strong++;
              boolGuess[j] = 1;
              boolSecret[i] = 1;
            }
          }
        }
        for (int i = 0; i < secret.size(); i++) {
          for (int j = 0; j < n; j++) {
            if (secret[i] == guess[j] and i != j and boolGuess[j] == 0 and boolSecret[i] == 0) {
              weak++;
              boolGuess[j] = 1;
              boolSecret[i] = 1;
            }

          }
        }

        cout << "    (" << strong << "," << weak << ")" << endl;

        boolGuess.clear();
        boolSecret.clear();
        weak = 0;
        strong = 0;
        guess.erase(guess.begin(), guess.begin() + n);
      }
    }

}
