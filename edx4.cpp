#include "edx-io.hpp"

int main() {
    int a, b, c, d, n;
    io >> a >> b >> c >> n;
    while (--n >= 0) {
        d = c + b - a;
        a = b;
        b = c;
        c = d;
    }
    io << a << '\n';
    return 0;
}
