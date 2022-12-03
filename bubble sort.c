            // BUBBLE SORT em ordem decrescente

#include <stdio.h>
int main()
{
    int vet[100],i,n,j,;
    printf("Digite o número de elementos que deseja ordenar: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)  //valor inicial de tamanho 0 que incrementa +1 a cada loop
    {
        
        scanf("%d",&vet[i]);  
    }
    for(i=0;i<n-1;i++) //laço externo onde é incrementado 1 posição a cada loop
    //ao chegar no final(n) usamos o n-1 para que o ultimo valor não saia do vetor
    for(i=0;i<n-i-1;++i)  //aqui usamos o n-1-i para que a posição [i] consiga rotacionar até o final para que a ordenação seja feita
    
    {
        if(vet[i]<vet[i+1])   //laço de condição, onde:
        //  SE a posição[i] é MENOR que o valor da próxima posição do vetor [i+1] o programa irá ignorar a ordenação
        {
            j=vet[i]; //j recebe o valor do vetor de i
            vet[i]=vet[i+1]; //troca a posição atual de i para a próxima na ordenação
            vet[i+1]=j; 
        }
    }
    
    for(i=0;i<n;++i) 
         printf("%d  ",vet[i]);
    return 0;
}