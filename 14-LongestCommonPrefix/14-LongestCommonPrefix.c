// Last updated: 29/11/2025, 19:22:38
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    // Start with the first string as prefix
    char* prefix = strs[0];
    int prefixLen = strlen(prefix);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        // Compare characters until mismatch or end
        while (j < prefixLen && j < strlen(strs[i]) && prefix[j] == strs[i][j]) {
            j++;
        }
        prefixLen = j;  // shorten prefix

        if (prefixLen == 0) {
            return ""; // no common prefix
        }
    }

    // Allocate memory for result
    char* result = (char*)malloc((prefixLen + 1) * sizeof(char));
    strncpy(result, prefix, prefixLen);
    result[prefixLen] = '\0';

    return result;
}
