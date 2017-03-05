#ifndef SCREEN732_H
#define SCREEN732_H

class Screen;

class Window_mgr {
    typedef std::vector<Screen>::size_type ScreenIndex;
public:
    Window_mgr();

    void clear(ScreenIndex);

    Screen &get(ScreenIndex);

    void add(Screen &);

private:
    std::vector <Screen> screens;
};

class Screen {
    friend void Window_mgr::clear(Window_mgr::ScreenIndex);

public:
    typedef std::string::size_type pos;

    Screen() = default;

    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {};

    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {};

    char get() const;

    char get(pos ht, pos wd) const;

    Screen &set(char c);

    Screen &set(pos row, pos col, char c);

    Screen &move(pos r, pos c);

    Screen &display(std::ostream &);

    const Screen &display(std::ostream &) const;


private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

    void do_display(std::ostream &) const;
};

inline
Window_mgr::Window_mgr() {
    screens = {Screen(24, 80, ' ')};
}

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
Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline
Screen &Screen::set(pos row, pos col, char c) {
    contents[row * width + col] = c;
    return *this;
}

inline
Screen &Screen::move(pos row, pos col) {
    pos new_row = row * width;
    cursor = new_row + col;
    return *this;
};

inline
Screen &Screen::display(std::ostream &os) {
    do_display(os);
    return *this;
};

inline
const Screen &Screen::display(std::ostream &os) const {
    do_display(os);
    return *this;
}

inline
void Screen::do_display(std::ostream &os) const {
    os << contents;
}


inline
Screen &Window_mgr::get(ScreenIndex index) {
    Screen &screen = screens[index];
    return screen;
}

inline
void Window_mgr::add(Screen &screen) {
    screens.push_back(screen);
}

inline
void Window_mgr::clear(ScreenIndex index) {
    Screen &screen = screens[index];
    screen.contents = std::string(screen.height * screen.width, ' ');
};
#endif