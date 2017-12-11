/*
 * server main.
 */


#include <cstdlib>
#include "Server.h"
using namespace std;
int main() {
  Server server(8500);
  try {
      server.start();
    } catch (const char *msg) {
      cout << "Cannot start server. Reason: " << msg << endl;
      exit(-1);
    }
  }