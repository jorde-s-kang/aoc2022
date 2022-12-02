#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(int argc, char *argv[])
{
  int big = 0;
  int cur = 0;
  ifstream in;
  string line;
  in.open("1_input.txt");
  while (getline(in, line)) {
    if (line == "") {
      if (cur > big)
	big = cur;
      cur = 0;
    } else {
      int n = std::stoi(line);
      cur += n;
    }
  }
  cout << big << "\n";
  return 0;
}

