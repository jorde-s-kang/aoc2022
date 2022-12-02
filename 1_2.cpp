#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void check (int n, int *vals)
{
  int i;
  for (i = (sizeof(vals) / 4); i >= 0; --i) {
    if (n > vals[i]) {
      if (i == 0) {
	vals[0] = n;
	return;
      } else {
	int j = 0;
	while (j <= i) {
	  vals[j-1] = vals[j];
	  j += 1;
	}	
	vals[i] = n;
	return;
      }
    }
  }
}

int main(int argc, char *argv[])
{
  int vals[3] = {0,0,0};
  int cur = 0;
  ifstream in;
  string line;
  in.open("1_input.txt");
  while (getline(in, line)) {
    if (line == "") {
      check(cur, vals);
      cur = 0;
    } else {
      int n = std::stoi(line);
      cur += n;
    }
  }
  int total = 0;
  int i;

  for (i = 0; i < sizeof(vals) / 4; ++i) {
    total += vals[i];
  }
  cout << total << "\n";
  return 0;
}

