void a() {
    int i = -1, &r = 0;
};

void b() {
    int i2 = 1;
    int *const p2 = &i2;
};

void c() {
    const int i = -1, &r = 0;
};

void d() {
    int i2 = 1;
    const int *const p2 = &i2;
};

void e() {
    int i2 = 1;
    const int *p1 = &i2;
};

void f() {
    const int &const r2;
};

void g() {
    int i = 1;
    const int i2 = i, &r = i;
};


int main() {
    a();
    b();
    c();
    d();
    e();
    f();
    g();
}