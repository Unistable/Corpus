#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<char, char> mapping = {{'A', 'A'}, {'B', 'T'}, {'C', 'Y'}, {'D', 'P'}, {'E', 'E'}, {'F', 'T'}, {'G', 'J'}, {'H', 'K'}, {'I', 'I'}, {'J', 'T'}, {'K', 'K'}, {'L', 'P'}, {'M', 'S'}, {'N', 'T'}, {'O', 'O'}, {'P', 'K'}, {'Q', 'Q'}, {'R', 'T'}, {'S', 'Y'}, {'T', 'P'}, {'U', 'U'}, {'V', 'T'}, {'W', 'J'}, {'X', 'K'}, {'Y', 'Y'}, {'Z', 'Z'}, {'a', 'a'}, {'b', 't'}, {'c', 'y'}, {'d', 'p'}, {'e', 'e'}, {'f', 't'}, {'g', 'j'}, {'h', 'k'}, {'i', 'i'}, {'j', 't'}, {'k', 'k'}, {'l', 'p'}, {'m', 's'}, {'n', 't'}, {'o', 'o'}, {'p', 'k'}, {'q', 'q'}, {'r', 't'}, {'s', 'y'}, {'t', 'p'}, {'u', 'u'}, {'v', 't'}, {'w', 'j'}, {'x', 'k'}, {'y', 'y'}, {'z', 'z'}};

    cout << "Type the text: ";
    string input_str;
    getline(cin, input_str);

    string output_str;
    for (char ch : input_str) {
        auto it = mapping.find(ch);
        if (it != mapping.end()) {
            output_str += it->second;
        } else {
            output_str += ch;
        }
    }

    cout << "Result: " << output_str << endl;
    system("pause");
    return 0;
}
