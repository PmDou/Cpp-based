#include <iostream>
using namespace std;

int main(){
    char name[10];
    double b, c;
    cin >> name >> b >> c;
    printf("TOTAL = R$ %.2lf\n", b + 0.15 * c);
    // system("pause");
    return 0;
}