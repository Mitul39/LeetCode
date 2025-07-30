class Solution {
    public String convert(String s, int numRows) {
        // Special case
        if (numRows == 1 || numRows >= s.length()) return s;

        // Create StringBuilder for each row
        StringBuilder[] rows = new StringBuilder[numRows];
        for (int i = 0; i < numRows; i++) {
            rows[i] = new StringBuilder();
        }

        int curRow = 0;
        boolean goingDown = false;

        // Traverse each character
        for (char c : s.toCharArray()) {
            rows[curRow].append(c);

            // Change direction at first or last row
            if (curRow == 0 || curRow == numRows - 1) {
                goingDown = !goingDown;
            }
            curRow += goingDown ? 1 : -1;
        }

        // Combine all rows
        StringBuilder result = new StringBuilder();
        for (StringBuilder row : rows) {
            result.append(row);
        }

        return result.toString();
    }
}
