"Include <stdio.h>

using namespace std;

int main(){
    int num, mayor, menor)
    for (int i=0; i<5; i++){
        printf("dime mi numero: ");
        scanf("%d", &num)
        if(i==0) {
                 mayor = num;
                 menor = num;
        }
        else{
             if (num > mayor) mayor = num;
             if (num < menor) menor = num;
        }
    }         
    printf("el numeor mayor era &d\nel numero menor era &d", mayor, menor);
    
    printf("\n\n\n");system("PAUSE");
    return 0;
} 
