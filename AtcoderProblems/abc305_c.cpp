#include <iostream>
#include <vector>

int main() {
    int H, W;
    std::cin >> H >> W;

    std::vector<std::vector<char>> grid(H, std::vector<char>(W));
    int emptyRow = -1, emptyCol = -1;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::cin >> grid[i][j];
            if (grid[i][j] == '.') {
                emptyRow = i;
                emptyCol = j;
            }
        }
    }

    int row, col;

    // Check if the empty square is in the first row or column
    if (emptyRow == 0 || emptyCol == 0) {
        if (emptyRow == 0) {
            row = emptyRow + 2;
        } else {
            row = emptyRow + 1;
        }
        col = emptyCol + 1;
    } else {
        row = emptyRow + 1;
        col = emptyCol + 1;
    }

    std::cout << row << " " << col << std::endl;

    return 0;
}
