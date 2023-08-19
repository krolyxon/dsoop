#include <iostream>

class Father {
    public:
    float height;
    bool skillissue;
};

class Son: public Father {
    public:
        void traits() {
            std::cout << "height: " << height << std::endl;
            std::cout << "did inherit skill issues as well? -> " << skillissue << std::endl;
        }
};

int main() {
    Son freund;
    freund.height = 6.3;
    freund.skillissue = true;

    freund.traits();
    return 0;
}
