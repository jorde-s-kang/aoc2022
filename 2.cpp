#include <iostream>
#include <fstream>
#include <string>
#define ALPHA_DIFF 23
#define ASCII_DIFF 64
using namespace std;

int main(int argc, char *argv[])
{
  ifstream in;
  in.open("2_input.txt");
  string line;
  int opp;
  int you;
  int score = 0;
  while (getline(in, line)) {
    opp = (int)line[0] - ASCII_DIFF;
    you = (int)line[2] - (ALPHA_DIFF + ASCII_DIFF);
    int res = opp - you;
    score += you;
    if (res == 2 || res == -1) {
      score += 6;
    } else if (res == 0) {
      score += 3;
    }
  }
  cout << score << "\n";
}

