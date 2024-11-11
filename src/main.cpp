#include <iostream>
#include "helper.h"

using namespace std;

const string VERSION_OPT_LONG       = "--version";
const string VERSION_OPT_SHRT       = "-v";
const string HELP_OPT_LONG          = "--help";
const string HELP_OPT_SHRT          = "-h";

const int MAJOR  = 0;
const int MINOR  = 1;
const int PATCH  = 0;

void parse_argument(int argc, const char* argv[]) {
  const string command = argv[1];

  if (command == VERSION_OPT_LONG || command == VERSION_OPT_SHRT) 
    cout << "namirs_v" << MAJOR << "." << MINOR << "." << PATCH << endl;

  if (command == HELP_OPT_LONG || command == HELP_OPT_SHRT) {
    print_help();
    cout << endl;
  };
};

void repl() {
  cout << "HERE COMES THE REPL" << endl;
};

int main(int argc, const char* argv[]) {

  if (argc == 1) repl();
  else parse_argument(argc, argv);

};