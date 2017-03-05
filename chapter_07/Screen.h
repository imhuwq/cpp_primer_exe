#ifndef SCREEN_H
#define SCREEN_H

class Screen {
public:
    typedef std::string::size_type pos;

    Screen() = default;

    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {};

    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {};

    char get() const;

    char get(pos ht, pos wd) const;

    Screen &move(pos r, pos c);

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

char Screen::get(pos row, pos col) const {
    pos r = row * width;
    return contents[r + col];
};

Screen &Screen::move(pos row, pos col) {
    pos new_row = row * width;
    cursor = new_row + col;
    return *this;
};
#endif