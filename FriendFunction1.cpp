#include <iostream>
using namespace std;

class mahasiswa
{
    private:
        string nama;
    
    public:
        friend void setNama(mahasiswa &a, string);
};

int main()
{

}