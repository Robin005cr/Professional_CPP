#include <iostream>
#include <functional>
#include <memory>
using namespace std;
class Widget {
public:
    int value;

    explicit Widget(int v) : value(v) {}

    // Captures 'this' by pointer -> lambda shares state with the object
    std::function<int()> makeSharedLambda() {
        return [this]() { return value; };
    }

    // C++17: captures a COPY of the whole object -> isolated, safe state
    std::function<int()> makeCopyLambda() {
        return [*this]() { return value; };
    }
};

int main() {
    // ---------------------------------------------------------
    // 1) [this] shares state with the original object
    // ---------------------------------------------------------
    Widget w(42);
    auto sharedLam = w.makeSharedLambda();

    cout << "Before mutation, sharedLam(): " << sharedLam() << "\n"; // 42

    w.value = 100; // mutate the original object
    cout << "After mutation,  sharedLam(): " << sharedLam() << "\n"; // 100 (shared!)

    // ---------------------------------------------------------
    // 2) [*this] copies the object -> no sharing
    // ---------------------------------------------------------
    Widget w2(7);
    auto copyLam = w2.makeCopyLambda();

    cout << "\nBefore mutation, copyLam(): " << copyLam() << "\n"; // 7

    w2.value = 999; // mutate the original object
    cout << "After mutation,  copyLam(): " << copyLam() << "\n"; // still 7 (isolated copy)



    return 0;
}