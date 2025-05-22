#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int maxArea = 0;
    stack<int> st;
    heights.push_back(0); // Append a zero to handle remaining elements

    for (int i = 0; i < heights.size(); i++) {
        while (!st.empty() && heights[st.top()] >= heights[i]) {
            int height = heights[st.top()];
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }
    heights.pop_back(); // Remove the appended zero
    return maxArea;
}

int maximalRectangle(vector<vector<char>>& matrix) {
    if (matrix.empty()) return 0;

    int maxArea = 0;
    vector<int> heights(matrix[0].size(), 0);

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            // Update heights: increase if '1', reset to 0 if '0'
            heights[j] = matrix[i][j] == '1' ? heights[j] + 1 : 0;
        }
        // Calculate max area for the current row's histogram
        maxArea = max(maxArea, largestRectangleArea(heights));
    }
    return maxArea;
}

int main() {
    vector<vector<char>> matrix = {
        {'0'}
    };

    cout << "The largest rectangular area of 1s is: " << maximalRectangle(matrix) << endl;

    return 0;
}