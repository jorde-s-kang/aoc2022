#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  ifstream in;
  string line;
  in.open("3_input.txt");
  int total = 0;
  while (getline(in, line)) {
    string c1 = line.substr(0, line.length()/2);
    string c2 = line.substr(line.length()/2);
    int i;
    for (i = 0; i < c1.length(); ++i) {
      size_t found = c2.find(c1[i]);
      if (found != string::npos) {
	total += isupper(c1[i]) ? c1[i] - 38 : c1[i] - 96;
	break;
      }
    }
  }
  cout << total << "\n";
  return 0;
}

