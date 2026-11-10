#include <stdio.h>

int leet(char text[], int text_lengh) {
    int changed = 0;
    for (int i = 0; i < text_lengh; i++) {
        if (text[i] == 'e') {
            text[i] = '3';
            changed++;
        }
    }

    if (changed > 0) {
        return changed;
    } else {
        return text_lengh * -1;
    }
}

int main() { // Hauptfunktion
    char text[] = "Peter spielt mit den Baellen";
    printf("%s\n", text);
    leet(text, sizeof(text));
    printf("%s\n", text);
    return 0;
}