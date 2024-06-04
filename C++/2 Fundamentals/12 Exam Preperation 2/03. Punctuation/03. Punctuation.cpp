#include <algorithm>
#include <array>
#include <cctype>
#include <chrono>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <sstream>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <stack>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main() {
    string input;
    cin >> input;

    unordered_map<int, vector<string>> sentences_by_punctuation_count;

    int punctuation_count = 0;
    string sentence_text;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'I') {
            punctuation_count++;
        }
        else if (punctuation_count > 0 && input[i] == '!') {
            sentences_by_punctuation_count[punctuation_count].push_back(sentence_text);
            punctuation_count = 0;
            sentence_text.clear();
        }
        else {
            sentence_text += input[i];
        }
    }

    for (auto & [punctuation_count, sentences] : sentences_by_punctuation_count) {
        cout << punctuation_count << " symbol sentences: " << sentences.size() << endl;
        for (const string& sentence : sentences) {
            cout << sentence << endl;
        }
    }

    return 0;
}
