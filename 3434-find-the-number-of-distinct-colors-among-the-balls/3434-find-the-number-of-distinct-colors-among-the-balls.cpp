class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> output;
        unordered_map<int, int> colors;
        unordered_map<int, int> count;
        int distinctColors = 0;

        for (auto& query : queries) {
            int left = query[0];
            int color = query[1];

            int prevColor = colors[left];

            if (prevColor == 0) {  
                colors[left] = color;
                if (count[color] == 0) distinctColors++;
                count[color]++;
            } else if (prevColor != color) {  
                count[prevColor]--;
                if (count[prevColor] == 0) distinctColors--;

                colors[left] = color;
                if (count[color] == 0) distinctColors++;
                count[color]++;
            }

            output.push_back(distinctColors);
        }

        return output;
    }
};
