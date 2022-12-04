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
    string l2;
    getline(in, l2);
    string l3;
    getline(in, l3);
    int i;
    for (i = 0; i < line.length(); ++i) {
      size_t f1 = l2.find(line[i]);
      if (f1 != string::npos) {
	size_t f2 = l3.find(line[i]);
	if (f2 != string::npos) {
	  total += isupper(line[i]) ? line[i] - 38 : line[i] - 96;
	  break;
	}
      }
    }
  }
  cout << total << "\n";
  return 0;
}

