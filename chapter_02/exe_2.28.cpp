void a() {
    int i, *const cp;
};

void b() {
    int *p1, *const p2;
};

void c() {
    const int ic, &r = ic;
};

void d() {
    const int *const p3;
};

void e() {
    const int *p;
};


int main() {
    a();
    b();
    c();
    d();
    e();
}