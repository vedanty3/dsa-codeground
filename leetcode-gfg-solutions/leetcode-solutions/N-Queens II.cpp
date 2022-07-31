// https : // leetcode.com/problems/n-queens-ii/

class Solution
{
public:
    bool is_valid_board(int row, int col, int n, vector<string> &board)
    {
        int store_row = row, store_col = col;

        while (row >= 0 and col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row--, col--;
        }

        row = store_row, col = store_col;

        while (col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            col--;
        }

        row = store_row, col = store_col;

        while (row < n and col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row++, col--;
        }

        return true;
    }

    void cnt_all_boards(int col, int n, int &cnt, vector<string> &board)
    {
        if (col == n)
        {
            cnt++;
            return;
        }

        for (int row = 0; row < n; row++)
        {
            if (is_valid_board(row, col, n, board))
            {
                board[row][col] = 'Q';
                cnt_all_boards(col + 1, n, cnt, board);
                board[row][col] = '.';
            }
        }
    }

    int totalNQueens(int n)
    {
        string s(n, '.');
        int cnt = 0;
        vector<string> board(n, s);
        cnt_all_boards(0, n, cnt, board);
        return cnt;
    }
};