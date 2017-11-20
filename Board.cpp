/*
 * Created by Elon, 308576933.
 * Board's source file.
 */

#include "Board.h"
//Constructors.
Board::Board(int size): size(size + 1), freeSquares((size * size) - 4) {
  this->board = new char*[this->size];
  for(int i = 0; i < this->size; i++){
    this->board[i] = new char[this->size];
  }
  setBoard();
}
Board::Board(): size(9), freeSquares(60) {
  this->board = new char*[this->size];
  for(int i = 0; i < this->size; i++){
    this->board[i] = new char[this->size];
  }
  setBoard();
}
Board::Board(const Board &b) {
  this->size = b.size;
  this->freeSquares = b.freeSquares;
  this->board = new char*[this->size];
  for(int i = 0; i < this->size; i++){
    this->board[i] = new char[this->size];
  }
  for(int i = 0; i < this->size; i++){
    for (int j = 0; j< this->size; j++) {
      this->board[i][j] = b.board[i][j];
    }
  }
}
Board& Board::operator=(const Board &b) {
  if (this != &b) {
    for(int i = 0; i < this->size; i++) {
      delete[] this->board[i];
    }
    delete this->board;
    this->size = b.size;
    this->freeSquares = b.freeSquares;
    this->board = new char*[this->size];
    for (int i = 0; i < this->size ; i++) {
      this->board[i] = new char[this->size];
    }
    for(int i = 0; i < this->size; i++) {
      for(int j = 0; j < this->size; j++) {
        this->board[i][j] = b.board[i][j];
      }
    }
  }
  return *this;
}
//Initalizing the new Board.
void Board::setBoard() {
  for(int i = 0; i < this->size ; i++) {
    for (int j = 0; j < this->size; j++) {
      this->board[i][j] = ' ';
    }
  }
  int mid = (this->size / 2);
  this->board[mid][mid] = 'O';
  this->board[mid + 1][mid + 1] = 'O';
  this->board[mid + 1][mid] = 'X';
  this->board[mid][mid + 1] = 'X';
}
//Destructor.
Board::~Board()  {
  for(int i = 0; i < this->size; i++) {
    delete[] this->board[i];
  }
  delete[] this->board;
}
//Getters.
char** Board::getBoard() {
  return this->board;
}
int Board::getSize() const { return this->size; }
//Adding to board.
void Board::addToBoard(char c, int row, int col) {
  this->board[row][col] = c;
  this->freeSquares--;
}
//Checks if board is not full.
bool Board::hasSpaceOnBoard() const {
  return this->freeSquares > 0;
}
//Flips after each move in one direction.
int Board::flip(Point start, char player, int jumpRow, int jumpCol) {
  int row = start.getX() + jumpRow;
  int col = start.getY() + jumpCol;
  int counter = 0;

  if(row == this->getSize() || col == this->getSize() || row == 0 || col == 0){
    return 0;
  }
  while(this->board[row][col] != player) {
    char c = this->board[row][col];
    if (c == ' ') { return 0; }
    if (c == player) { break; }
    counter++;
    row += jumpRow;
    col += jumpCol;
    if(row == this->getSize() || col == this->getSize() || row == 0 || col == 0){
      return 0;
    }

  }
  row = start.getX();
  col = start.getY();
  for (int i = 0; i <= counter; i++) {
    this->board[row][col] = player;
    row += jumpRow;
    col += jumpCol;
  }
  return counter;
}
//Get the next possible move in one direction.
vector<Point> Board::getNextPossibleMoves(char opp, int jumpRow, int jumpCol,
                                          int currentRow, int currentCol) {
  vector<Point> v;
  int row = currentRow + jumpRow;
  int col = currentCol + jumpCol;
  int counter = 0;
  char c;
  while (row < this->getSize() && col < this->getSize() && col > 0 && row > 0){
    c = this->board[row][col];
    if (c == opp) {
      row += jumpRow;
      col += jumpCol;
      counter++;
      continue;
    }
    if (c == ' ' && counter != 0) {
      Point p(row, col);
      v.push_back(p);
      break;
    }
    break;
  }
  return v;
}
//Operator for printing the Board.
ostream& operator<<(ostream &out, const Board &b) {
  for(int i = 0; i < b.size; i++) {
    for (int j = 0; j< b.size; j++) {
      if (i == 0) {
        out << j <<" | ";
        continue;
      }
      if (j == 0) {
        out << i <<" | ";
        continue;
      }
      out << b.board[i][j] <<" | ";
    }
    out << endl;
    out << "---";
    for (int k = 0; k < b.size - 1; k++) {
      out << "----";
    }
    out << endl;
  }
  return out;
}
