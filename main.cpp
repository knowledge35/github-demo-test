#include <iostream>
using namespace std;

int ust (int t, int u) // t = taban , u = ussu
    {
        int sonuc =1;
        for (int i=1; i<=u; i++) 
    {
       sonuc = sonuc * t ; // t^u = t*t*t*t*... (u tane)
    }
    return sonuc; 
    }
int main()
{
    cout << "oz yineli fonksiyonlar-mersanne sayilari" << endl;
    
    for (int i = 1; i<= 20; i++) //ilk 20 sayı istendiği için
    { 
    cout << ust(2,i)-1 << endl; // 2^n - 1 formülünü bastırıyoruz
    }
}
    
