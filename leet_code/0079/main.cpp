void board_find_start(set<pair<int, int>>* starts, vector<vector<char>>& board, const char& letter)
{
    const int h = board.size();
    const int w = board[0].size();
    
    for (int j=0; j<h; ++j)
    {
        for (int i=0; i<w; ++i)
        {
            if (board[j].at(i) == letter)
            {
                starts->insert(make_pair(i, j));
            }
        }
    }
}

bool dfs (vector<vector<char>>& board, const string& word, vector<bool>& visited)
{

}

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
  
        const size_t h = board.size();
        const size_t w = board[0].size();
        
        set<pair<int, int>> starts;
        board_find_start(&starts, board, word[0]);
                
        while (!starts.empty())
        {
            cout << starts.begin()->second << endl;
            starts.erase(starts.begin());
            
            //vector<int> visited(w*h, false);
        }
        return false;
    }
};