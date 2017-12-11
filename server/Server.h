/*
 * server header file.
 */


#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H
#include <iostream>
using namespace std;

class Server {
public:
    Server(int port);
    Server();
    void start();
    void stop();
private:
    int port;
    string message;
    bool connection;
    int serverSocket; // the socket's file descriptor
    /**
     * handleClients.
     * this function is in charge of the game logic and knows
     * to read a move from a player and send it to the opponent.
     * @param clientSocket - first player socket.
     * @param clientSocket2 - second player socket.
     */
  void handleClients(int clientSocket,int clientSocket2);
    /**
     * handlePlayingClient.
     * reads a move from playing client.
     * @param clientSocket - the player socket descriptor.
     */
  void handlePlayingClient(int clientSocket);
    /**
     * setPlayer.
     * sends the player is turn number (1 or 2).
     * @param clientSocket - client socket descriptor.
     * @param numTurn - first player or second.
     */
  void setPlayer(int clientSocket,int numTurn);
    /**
     * messageToClient.
     * sends a message to client.
     * @param clientSocket - the client socket descriptor
     *        to send the message to.
     * @param m - the message to be sent.
     */
  void messageToClient(int clientSocket, string m);
    /**
     * endGame.
     * gets a point and checks if equal to (-1,-1).
     * @param point - the point to be checked.
     * @return true if point is (-1,-1) and false otherwise.
     */
  bool endGame(string point);
    /**
     * getPortFromFile.
     * gets the port number from file.
     * @param path - the settings file path.
     * @return the port number for server.
     */
  int getPortFromFile(string path);
    /**
     * badMove.
     * gets a point and checks if equal to (0,0).
     * @param point - the point to be checked.
     * @return true if point is (0,0) and false otherwise.
     */
  bool badMove(string point);
    /**
     * checkConnection.
     * @param n - the number which returns from read/write function.
     * @return the status oc the connection.
     */
  bool checkConnection(int n);
};

#endif //SERVER_SERVER_H