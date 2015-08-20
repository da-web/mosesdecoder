#include <iostream>
#include "moses/FF/JoinScore/Trie.h"

using namespace std;
using namespace Moses;

int main(int argc, char* argv[])
{
  cerr << "Starting..." << endl;

  Trie<bool> trie(argv[1], argv[2], false, true);
  trie.Save();

  cerr << "Finished" << endl;
}
