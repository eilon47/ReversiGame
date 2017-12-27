/*
* Class for Client.
*/


#ifndef REVERSIGAME_CLIENT_H
#define REVERSIGAME_CLIENT_H

#include "cstring"
#include "Point.h"
#include "Sign.h"
#include "Display.h"

class Client {
    public:
        /**
         * constructor.
         * @param serverIP  - the IP address.
         * @param serverPort - the Port number.
         */
        Client(const char *serverIP, int serverPort, Display &display);
    /**
     * constructor.
     */
        Client(Display &display);
    /**
     * connectToServer.
     * Establishing connection with server
     * and prints an error if got one or connection message.
     */
        void connectToServer();
    /**
     * sendMove.
     * gets a point from player convert it to string
     * and sends it to server.
     * @param point - the point to be sent.
     */
        void sendMove(Point point);
    /**
     * getMove.
     * gets a point (as string) from server and converts it to Point object.
     * @return the point that was created (other player move).
     */
        Point getMove();
    /**
     * getClientSign.
     * @return the player's sign.
     */
        int getClientSign();
    /**
     * getMessage.
     * @return a message from server.
     */
        string getMessage();
    /**
     * getNumTurn.
     * gets initially the turn number from server (1 or 2).
     */
        void getNumTurn();
    /**
     * getSettingsFromFile.
     * gets the server number and the port number from file.
     */
        void getSettingsFromFile();
    void sendCommand(string command);

        private:
        Display *display;
        const char *serverIP;
        int serverPort;
        int clientSocket;
        int turnNum;
    };


#endif //REVERSIGAME_CLIENT_H
