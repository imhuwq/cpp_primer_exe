class Y;

class X {
public:
    Y *y;
};

class Y {
public:
    X x;
};

int main() {
    return 0;
}