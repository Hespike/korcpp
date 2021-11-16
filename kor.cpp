#include <cmath>

class Kor {
    const double r;

public:
    Kor(const double r) : r(r) {};

    double get_r() const {
        return r;
    }

    double kerulet() const {
        return 2 * r * M_PI;
    }

    double terulet() const {
        return r * r * M_PI;
    }
};
