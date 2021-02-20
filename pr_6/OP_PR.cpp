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
            fprintf(f      	      
        }
        fclose(f);                                    
     err =, name_in_f, "r+");
    if (err != 0)
        cout << "The file " << name_in_f << " was not opened\n";
   e {
        while (fscanf_s(f, "%s", s, _countof(s)) != EOF)
        {
           fscanf_s(f, "%d", &k);
            a = k / 100;
            b = (k % 100) / 10;
         
        fclose(f);
        fclose(r);
    }
    system("pause");
    return ;
}
