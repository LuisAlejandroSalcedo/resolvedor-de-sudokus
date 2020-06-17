// Resolvedor de Sudokus 3000 usando backtracking
// created by Gamma001

#include <iostream>
#include <cstdlib>

using namespace std;

bool success(int sudoku[9][9], int row, int col, int num) {
    for(int i = 0;i != 9; i++) {
        if(sudoku[row][i] == num || sudoku[i][col] == num) return false;
    }
    int sub_r = (row/3), sub_c = col/3;
    sub_r *= 3;
    sub_c *= 3;
    for(int i = sub_r;i != sub_r+3; i++) {
        for(int j = sub_c;j != sub_c+3; j++) {
            if(sudoku[i][j] == num)
                return false;
        }
    }
    return true;
}

bool solve(int sudoku[9][9], int index = 0) {
    if(index == 81) return true;
    int row = index/9, col = index%9;
    if(sudoku[row][col] != 0)
        return solve(sudoku, index+1);
    //cout << row << ',' << col << '\n';
    // En esta parte implementamos el algoritmo backtracking hasta que encuentre una solución.
    if(sudoku[row][col] != 0) solve(sudoku, index+1);
    for(int i = 1;i != 10; i++) {
        if(sudoku[row][col] == 0 && success(sudoku, row, col, i)) {
            sudoku[row][col] = i;
            if(solve(sudoku, index+1))
                return true;
            sudoku[row][col] = 0;
        }
    }
    return false;
}

int main() {
    // Sudoku por defecto. Busca tus propios sudokus e ingresalo aquí.
    int sudoku[9][9] = {
        {0, 3, 0, 0, 1, 0, 0, 6, 0},
        {7, 5, 0, 0, 3, 0, 0, 4, 8},
        {0, 0, 6, 9, 8, 4, 3, 0, 0},
        {0, 0, 3, 0, 0, 0, 8, 0, 0},
        {9, 1, 2, 0, 0, 0, 6, 7, 4},
        {0, 0, 4, 0, 0, 0, 5, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    if(!solve(sudoku)) {
        cout << "Imposible de resolver";
        exit(0);
    }
    for(int i = 0;i != 9; i++) {
        if(i%3 == 0) {
            for(int j = 0;j != 13; j++)
                cout << "- ";
            cout << '\n';
        }
        for(int j = 0;j != 9; j++) {
            if(j%3 == 0) cout << "| ";
            cout << sudoku[i][j] << ' ';
            if(j == 8) cout << "|";
        }
        cout << '\n';
    }
    for(int j = 0;j != 13; j++)
        cout << "- ";
    return 0;
}
