#include <iostream>
using namespace std;

class pelajar;
class manusia
{
    public:
        void showNilaiPelajar(pelajar &x);
};

class pelajar
{
    private:
        int nilai;

    public:
        pelajar() { nilai = 100; }
        friend void manusia::showNilaiPelajar(pelajar &x);
};

void manusia::showNilaiPelajar(pelajar &x)
{
    cout << x.nilai;
}

int main()
{
    manusia musta;
    pelajar pmusta;
    musta.showNilaiPelajar(pmusta);
    return 0;
}