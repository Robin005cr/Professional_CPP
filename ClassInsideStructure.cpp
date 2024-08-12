#include <iostream>
using namespace std;
struct Outer {
    int outer_data;

    class Inner {
    public:
        void display() {
            cout << "Inner class method called" << std::endl;
        }
    };
};

int main() {
    Outer::Inner obj;
    obj.display();

    return 0;
}
