#include "Server.h"
#include <stdlib.h>
using namespace std;
int main() {
  Server server;
  try {
    server.start();
  } catch (const char *msg) {
    cout << "Cannot start server. Reason: " << msg << endl;
    exit(-1);
  }
}