//
// Created by john on 3/12/17.
//

#ifndef C_TEXTQUERY_H
#define C_TEXTQUERY_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <memory>

using namespace std;

typedef vector <string> text_lines;


class QueryResult;

void print(ostream &out, QueryResult qr);

class QueryResult {

public:
    QueryResult(string name, set<int> line_nums, shared_ptr <text_lines> lines) :
            name(name), line_nums(line_nums), lines(lines) {};

    string name;
    set<int> line_nums;
    shared_ptr <text_lines> lines;
};

class TextQuery {
public:

    TextQuery(ifstream &inFile);

    QueryResult query(string &word);

private:
    shared_ptr <text_lines> lines;
    map <string, set<int>> words_info;

    void update_words(istringstream &words, int line_num);
};

#endif //C_TEXTQUERY_H
