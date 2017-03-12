//
// Created by john on 3/12/17.
//

#include "textquery.h"

void print(ostream &out, QueryResult qr) {

    out << qr.name << " occurs " << qr.line_nums.size() << " times:" << endl;
    auto iter = qr.line_nums.rbegin();
    while (iter != qr.line_nums.rend()) {
        int num = *(iter++);
        out << "  " << num << ": " << qr.lines->at(num-1) << endl;
    }
}

TextQuery::TextQuery(ifstream &inFile) {
    string line;
    lines = make_shared<text_lines>();

    int line_num = 0;
    while (getline(inFile, line)) {
        ++line_num;

        lines->push_back(line);

        istringstream words(line);
        update_words(words, line_num);
    }
}

QueryResult TextQuery::query(string &word) {
    set<int> &word_info = words_info[word];
    return QueryResult(word, word_info, lines);
}

void TextQuery::update_words(istringstream &words, int line_num) {
    string word;
    while (words >> word) {
        set<int> &word_info = words_info[word];
        word_info.insert(line_num);
    }
}

