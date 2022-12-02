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
  int res;
  int score = 0;
  while (getline(in, line)) {
    opp = (int)line[0] - ASCII_DIFF;
    res = (int)line[2] - (ALPHA_DIFF + ASCII_DIFF);    
    if (res == 2) {
      score += 3;
      score += opp;
    } else if (res == 3) {
	score += 6;
	if (opp == 3)
	  score += 1;
	else
	  score += opp + 1;
    }
    else {
      if (opp == 1)
	score += 3;
      else
	score += opp - 1;
    }
  }
  cout << score << "\n";
}

