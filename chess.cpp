#include <iostream>
#include <vector>

using namespace std;

// 打印棋盘
void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

// 检查游戏是否结束
bool isGameOver(const vector<vector<char>>& board) {
    // 检查行
    for (const auto& row : board) {
        if (row[0] != ' ' && row[0] == row[1] && row[1] == row[2]) {
            return true;
        }
    }

    // 检查列
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return true;
        }
    }

    // 检查对角线
    if ((board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
        return true;
    }

    // 检查是否填满
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false;
            }
        }
    }
    return true;
}

// 检查获胜者
char getWinner(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        if (row[0] != ' ' && row[0] == row[1] && row[1] == row[2]) {
            return row[0];
        }
    }

    for (int i = 0; i < 3; ++i) {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return board[0][i];
        }
    }

    if ((board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
        return board[0][0];
    }

    return ' ';
}

// 主函数
int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';
    bool gameOver = false;

    while (!gameOver) {
        printBoard(board);
        cout << "Player " << currentPlayer << " enter row and column: ";
        int row, col;
        cin >> row >> col;

        if (board[row - 1][col - 1] != ' ') {
            cout << "This cell is already taken. Try again." << endl;
            continue;
        }

        board[row - 1][col - 1] = currentPlayer;
        gameOver = isGameOver(board);

        if (gameOver) {
            char winner = getWinner(board);
            if (winner != ' ') {
                cout << "Player " << winner << " wins!" << endl;
            }
            else {
                cout << "It's a draw!" << endl;
            }
        }
        else {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }

    return 0;
}