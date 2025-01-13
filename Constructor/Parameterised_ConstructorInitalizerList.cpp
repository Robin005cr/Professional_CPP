#include <iostream>
using namespace std;
class student {
    int id, number, rank;
public:
    student(int i, int n, int r) : id{ i }, number{ n }, rank{ r }
    {

    }

    void print()
    {
        cout << "ID = " << id << "\n";
        cout << "Number = " << number << "\n";
        cout << "Rank = " << rank << "\n";
    }

};

int main() {
    student S(12, 34, 5);
    S.print();
    return 0;
}
