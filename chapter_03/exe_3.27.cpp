int txt_size() {
    return 10;
}

int main() {
    unsigned buf_size = 1024;
    const unsigned cbuf_size = buf_size;

    int ia[buf_size];
    int ib[4 * 7 - 14];
    int ic[txt_size()];
    int id[cbuf_size];
//    char st[11] = "fundamental";
}