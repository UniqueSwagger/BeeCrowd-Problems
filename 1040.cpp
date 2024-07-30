#include <iostream>
#include <stdio.h>
using namespace std;
int main() {

    double n1,n2,n3,n4,avg,newavg;
    cin >> n1 >> n2 >> n3 >> n4;
    avg=(n1*2+n2*3+n3*4+n4)/10;
    if (avg>=7)
    {
        printf("Media: %.1lf\n",avg);
        printf("Aluno aprovado.\n");
    }
    else if (avg<5)
    {    
        printf("Media: %.1lf\n",avg);
        printf("Aluno reprovado.\n");
    }
    else
    {
        double score;
        cin >> score;
        printf("Media: %.1lf\n",avg);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n",score);
        newavg=(avg+score)/2;
        if (newavg >=5)
        {
            printf("Aluno aprovado.\n");
        }
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",newavg);
    }
    return 0;
}