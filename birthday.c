#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);
    int freq[26] = {0},i;
    for ( i = 0; i< strlen(s); i++) {
        freq[s[i] - 'a']++;
    }


    char result[101];
    int idx = 0;
    while (idx < strlen(s))
        {
          int last_color = -1;
          for ( i = 0; i < 26; i++)
        {
            if (freq[i] > 0 && i!=last_color)
             {
                result[idx++] = 'a' + i;
                freq[i]--;
                last_color = i;
            }
        }
        if (last_color == -1) {
            printf("-1\n");
            return 0;
        }
    }
    result[idx] = '\0';
    printf("%s\n", result);
    return 0;
}
