#include <iostream>
#include <string>
#include <cctype>   // tolower, isalpha, isspace
using namespace std;

int main() {

    string text;

    cout << "======= TEXT ANALYZER =======\n";
    cout << "Enter a sentence: ";
    getline(cin, text);   // reads full line including spaces

    // ── Guard: empty input
    if (text.empty()) {
        cout << "No text entered.\n";
        return 0;
    }

    // ── Step 1: Initialize counters
    int wordCount     = 0;
    int vowelCount    = 0;
    int consonantCount = 0;
    int freq[256]     = {0};   // frequency of every character
    string vowels     = "aeiou";

    // ── Step 2: Count words (space-to-letter transitions)
    bool inWord = false;
    for (int i = 0; i < text.length(); i++) {
        if (!isspace(text[i]) && !inWord) {
            wordCount++;      // new word started
            inWord = true;
        } else if (isspace(text[i])) {
            inWord = false;   // word ended
        }
    }

    // ── Step 3: Loop through each character
    for (int i = 0; i < text.length(); i++) {
        char c    = text[i];
        char low  = tolower(c);   // convert to lowercase for comparison

        // Count vowels and consonants (letters only)
        if (isalpha(c)) {
            if (vowels.find(low) != string::npos) {
                vowelCount++;       // found in "aeiou"
            } else {
                consonantCount++;   // letter but not a vowel
            }
        }

        // Track frequency (ignore spaces)
        if (!isspace(c)) {
            freq[(int)c]++;
        }
    }

    // ── Step 4: Find most frequent character
    int maxFreq   = 0;
    char maxChar  = ' ';

    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    // ── Step 5: Display results
    cout << "\n------- ANALYSIS RESULTS -------\n";
    cout << "Total Characters  : " << text.length()  << "\n";
    cout << "Word Count        : " << wordCount       << "\n";
    cout << "Vowels            : " << vowelCount      << "\n";
    cout << "Consonants        : " << consonantCount  << "\n";
    cout << "Most Frequent Char: '" << maxChar
         << "' (appears " << maxFreq << " times)\n";
    cout << "================================\n";

    return 0;
}