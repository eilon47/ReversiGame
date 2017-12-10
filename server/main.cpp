#include "Server.h"
using namespace std;
int main() {
  Server server(8000);
  while(true) {
    try {
      server.start();
    } catch (const char *msg) {
      cout << "Cannot start server. Reason: " << msg << endl;
      exit(-1);
    }
  }
}