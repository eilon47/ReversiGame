/*
 * server main.
 */


#include <cstdlib>
#include "Server.h"
using namespace std;
int main() {
  Server server(8000);
  try {
      server.start();
      cout << "Enter exit to stop server" << endl;
      string str;
      cin >> str;
      if (str == "exit") {
        server.stop();
      }
    } catch (const char *msg) {
      cout << "Cannot start server. Reason: " << msg << endl;
      exit(-1);
    }
  }