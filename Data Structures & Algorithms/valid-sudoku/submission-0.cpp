class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> seen;
        // horizontal
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                if (c == '.') continue; 
                if (seen.find(c) != seen.end()) {
                    return false;
                }
                seen.insert(c);
            }
            seen.clear();
        }

        // vertical
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[j][i];
                if (c == '.') continue; 
                if (seen.find(c) != seen.end()) {
                    return false;
                }
                seen.insert(c);
            }
            seen.clear();
        }

        // boxes
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[j%3+3*(i%3)][j/3 +3*(i/3)];
                if (c == '.') continue; 
                if (seen.find(c) != seen.end()) {
                    return false;
                }
                seen.insert(c);
            }
            seen.clear();
        }

        return true;
    }
};