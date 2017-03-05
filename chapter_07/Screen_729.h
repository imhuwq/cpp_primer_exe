#ifndef SCREEN729_H
#define SCREEN729_H

class Screen {
public:
    typedef std::string::size_type pos;

    Screen() = default;

    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {};

    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {};

    char get() const;

    char get(pos ht, pos wd) const;

    Screen set(char c);

    Screen set(pos row, pos col, char c);

    Screen move(pos r, pos c);

    Screen display(std::ostream &);

    const Screen display(std::ostream &) const;


private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

    void do_display(std::ostream &) const;
};

inline
char Screen::get() const {
    return contents[cursor];
}

inline
char Screen::get(pos row, pos col) const {
    pos r = row * width;
    return contents[r + col];
};


inline
Screen Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline
Screen Screen::set(pos row, pos col, char c) {
    contents[row * width + col] = c;
    return *this;
}

inline
Screen Screen::move(pos row, pos col) {
    pos new_row = row * width;
    cursor = new_row + col;
    return *this;
};

inline
Screen Screen::display(std::ostream &os) {
    do_display(os);
    return *this;
};

inline
const Screen Screen::display(std::ostream &os) const {
    do_display(os);
    return *this;
}

inline
void Screen::do_display(std::ostream &os) const {
    os << contents;
}

#endif