#include "exe_6.8.h"

int fact(int num) {
    int ret = 1;
    while (num > 1) {
        ret = ret * num;
        --num;
    }
}

int main () {

}