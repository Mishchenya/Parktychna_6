#include <iostream> 
#include <iomanip> 
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
    FILE* f;
    FILE* r;
    int j, k;
    int a, b, c;
    double d;
    char name_in_f[] = "input.txt";
    char name_in_f2[] = "input2.txt";
    char s[] = "Line";
    errno_t err,tt;
    err = fopen_s(&f, name_in_f, "w");
    if (err != 0)
        cout << "The file " << name_in_f << " was not opened\n";
    else {
        for (j = 100; j < 1000; j++)
        {
            fprintf(f, "%s %d \n", s, j);
          	      
        }
        fclose(f);                                    
    }
    tt = fopen_s(&r, name_in_f2, "w");
    err = fopen_s(&f, name_in_f, "r+");
    if (err != 0)
        cout << "The file " << name_in_f << " was not opened\n";
    else {
        while (fscanf_s(f, "%s", s, _countof(s)) != EOF)
        {
            fscanf_s(f, "%d", &k);
            a = k / 100;
            b = (k % 100) / 10;
            c = k % 10;
            cout << a << setw(5) << b << setw(5) << c << endl;
            if (b > c & b > a)
            {
                fprintf(r, "%d \n", b);
            }
            if (c > b & c > a)
            {
                fprintf(r, "%d \n", c);
            }
            if (a > c & a > b)
            {
                fprintf(r, "%d \n", a);
            }
        }   
        fclose(f);
        fclose(r);
    }
    system("pause");
    return 0;
}
