#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#include <windows.h>

float aproximacaoPi();// declara��o da fun��o
float aproximacaoNeperiano(); // declara��o de fun��o
float verificaSeEInteiro(float);
float repeticaoK(float);


int somatorio(){ //Menu somat�rio
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores

int res=0;

        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras

        printf("\n\n\t\t\t\t\t\t Menu Somat�rio \n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\t1. Somat�rio de j = 0 at� n para a regra j\n");
        printf("\t2. Somat�rio de j = 0 at� n para a regra (-j)^(j + 1)\n");
        printf("\t3. Aproxima��o do n�mero pi com somat�rio at� n.\n");
        printf("\t4. Aproxima��o do neperiano por somat�rio at� n.\n");
        printf("\t5. Voltar ao menu anterior\n\n");
        printf("\tDigite a op��o desejada: ");
        scanf("%d", &res);

        res=res+10;
        return(res);

}

int logicaProposicional(){ //Menu L�gica porposicional
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores
int res=0;

        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t\t\t\t Menu L�gica Poposicional \n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\t1. ~p\n");
        printf("\t2. ~q\n");
        printf("\t3. p^q\n");
        printf("\t4. pVq\n");
        printf("\t5. OU p OU q\n");
        printf("\t6. p  -> q\n");
        printf("\t7. p <-> q\n");
        printf("\t8. Voltar ao menu anterior\n\n");
        printf("\tDigite a op��o desejada: ");
        scanf("%d", &res);
        res=res+20;
        return(res);




}

int analiseCombinatoria(){ // Menu an�lise combinat�ria
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores

int res=0;

        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t\t\t\t Menu An�lise Combinat�ria \n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\t1. Permuta��o Simples: P(n)\n");
        printf("\t2. Arranjo Simples: A(n, k)\n");
        printf("\t3. Combina��o Simples: C(n, k)\n");
        printf("\t4. Arranjo com Repeti��o: AR(n, k)\n");
        printf("\t5. Combina��o com Repeti��o: CR(n, k)\n");
        printf("\t6. Permuta��o com Repeti��o: P(1, K1, ... , Kp)\n");
        printf("\t7. Voltar ao menu anterior\n\n");
        printf("\tDigite a op��o desejada: ");
        scanf("%d", &res);
        res=res+30;
        return(res);

}

double regraJ(){
int c, teste;
float n;
double  res=0;
char ch, ponto;

HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores

        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t\tSomat�rio de j = 0 at� n para a regra j\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tDigite um valor inteiro para n: ");
        scanf("%f",&n);
         do {
            ch = fgetc(stdin);
            } while (ch =='.');
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        teste = verificaSeEInteiro(n);

        while ((teste==0)||(ponto=='s')){ // Enquanto n�o for inteiro repete mensagem
        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t\tSomat�rio de j = 0 at� n para a regra j\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tValor inv�lido, digite um valor inteiro e sem ponto para n: ");
        scanf("%f",&n);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            if (ch!='\n') ponto= 's';
            else ponto = 'n';


        teste = verificaSeEInteiro(n);


        }
        if (n>0){
			for(c=0; c<=n; c++) res=res+c;
        }
		else{
			for(c=n; c<=0; c++) res=res+c;
		}
        return(res);
}

double regraJ2(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores

float n, teste;
int c;
double res=0;
char ch, ponto;

        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\tSomat�rio de j = 0 at� n para a regra (-j)^(j + 1)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tDigite um valor inteiro e positivo para n: ");
        scanf("%f",&n);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';
        teste = verificaSeEInteiro(n);

        while ((teste==0)||(ponto=='s') ||(n<=0)){ // Enquanto n�o for inteiro repete mensagem
           setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\tSomat�rio de j = 0 at� n para a regra (-j)^(j + 1)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tValor inv�lido, digite um valor inteiro, positivo e sem ponto para n: ");
        scanf("%f",&n);
         do {
            ch = fgetc(stdin);
            } while (ch =='.');
            if (ch!='\n') ponto= 's';
            else ponto = 'n';
        teste = verificaSeEInteiro(n);
        }
        for(c=0; c<=n; c++)res=res+(pow(-c,c+1));

        return(res);

}

float aproximacaoPi(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


int n=0;
float  k=0, res=0;
char ch, ponto;

        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t\tAproxima��o do n�mero pi com somat�rio at� n\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tDigite um valor inteiro, positivo e maior que zero para aproxima��o de pi:");
        scanf("%d",&n);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        while ((n<=0)||(ponto=='s')){

            setbuf(stdin, NULL);
            system("cls");
            SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
            printf("\n\n\t\t\t\tAproxima��o do n�mero pi com somat�rio at� n\n");
            printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
            SetConsoleTextAttribute(hConsole, 7);
            printf("\tValor inv�lido, digite um valor inteiro, positivo, maior que zero e sem ponto para aproxima��o de pi:");
            scanf("%d",&n);
            do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        };


        for(k=0; k<=n; k++) res=res+(8/((4*k+1)*(4*k+3)));

        return(res);

}

float aproximacaoNeperiano(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


float fat0=1, fat=0, n=0, k=0, res=0 ;
char ch, ponto;

        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t\tAproxima��o do neperiano por somat�rio at� n\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tDigite um valor inteiro para aproxima��o do n�mero neperiano: ");
        scanf("%f",&n);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        while ((n<=0)||(ponto=='s')){

             setbuf(stdin, NULL);
            system("cls");
            SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
            printf("\n\n\t\t\t\tAproxima��o do neperiano por somat�rio at� n\n");
            printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
            SetConsoleTextAttribute(hConsole, 7);
            printf("\tValor inv�lido, digite um valor inteiro, maior que zero e sem ponto para aproxima��o do n�mero neperiano: ");
            scanf("%f",&n);
            do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        };

        k=n;
        while(k>=1){

        for(fat=1; n>=1; n--) fat=fat*n;


        res=res+(1/fat);


        n=k;
        n--;
        k--;

};

        res= res+fat0;
        return(res);
}

int notP(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


int res=0, p=0;

    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t\t\t\t\t  ~P\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tDigite um valor l�gico 1(verdadeiro) ou 0(falso) para P: ");
    scanf("%d",&p);
    p= verificaSeE0ou1(p);
    res = !p;

    return(res);

}

int notQ(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


int q=0, res=0;

    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t\t\t\t\t  ~Q\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tDigite um valor l�gico 1(verdadeiro) ou 0(falso) para Q: ");
    scanf("%d",&q);
    q= verificaSeE0ou1(q);

    res= !q;
    return(res);
}

int pEq(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


int p=0, q=0, res=0;


    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t\t\t  P ^ Q\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tDigite um valor l�gico 1(verdadeiro) ou 0(falso) para P: ");
    scanf("%d", &p);
    p= verificaSeE0ou1(p);
    printf("\tDigite um valor l�gico 1(verdadeiro) ou 0(falso) para Q: ");
    scanf("%d", &q);
    q= verificaSeE0ou1(q);
    res= p&&q;
    return(res);

}

int pOUq(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


int p=0, q=0, res=0;

    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t\t\t  P V Q\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tDigite um valor l�gico 1(verdadeiro) ou 0(falso) para P: ");
    scanf("%d", &p);
    p= verificaSeE0ou1(p);
    printf("\tDigite um valor l�gico 1(verdadeiro) ou 0(falso) para Q: ");
    scanf("%d", &q);
    q= verificaSeE0ou1(q);

    res= p||q;
    return(res);
}

int OUpOUq(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


int p=0, q=0, res=0;

    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t\t\t  ou P ou Q\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tDigite um valor l�gico 1(verdadeiro) ou 0(falso) para P: ");
    scanf("%d", &p);
    p= verificaSeE0ou1(p);
    printf("\tDigite um valor l�gico 1(verdadeiro) ou 0(falso) para Q: ");
    scanf("%d", &q);
    q= verificaSeE0ou1(q);
    res= p^q;
    return(res);

}

int sePentaoQ(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


int p=0, q=0, res=0;

    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t\t\t  P -> Q\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tDigite um valor l�gico 1(verdadeiro) ou 0(falso) para P: ");
    scanf("%d", &p);
    p= verificaSeE0ou1(p);
    printf("\tDigite um valor l�gico 1(verdadeiro) ou 0(falso) para Q: ");
    scanf("%d", &q);
    q= verificaSeE0ou1(q);

    if(p==1 && q==0){

        res=0;
    }
            else

                res=1;
    return(res);
}

int P_e_se_somente_se_Q(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


int p=0, q=0, res=0;

    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t\t\t  P <-> Q\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tDigite um valor l�gico 1(verdadeiro) ou 0(falso) para P: ");
    scanf("%d", &p);
    p= verificaSeE0ou1(p);
    printf("\tDigite um valor l�gico 1(verdadeiro) ou 0(falso) para Q: ");
    scanf("%d", &q);
    q= verificaSeE0ou1(q);

    res= !(p^q);
    return(res);
}

double PermutacaoSimples(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


int teste, c=0;
double res=1;
float n=0;
char ch, ponto;

    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t Permuta��o Simples: P(n)\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tDigite um valor inteiro e positivo para n:");
    scanf("%f",&n);
    do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

    teste = verificaSeEInteiro(n);

    while ((teste==0)||(ponto=='s')){

    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t Permuta��o Simples: P(n)\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tValor inv�lido, digite um valor inteiro, positivo e sem ponto para n:");
    scanf("%f",&n);
    do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';
    teste = verificaSeEInteiro(n);
    }

    while ((n<0)||(ponto=='s')){
        printf("\tValor inv�lido, digite um valor inteiro, positivo e sem ponto para n:");
        scanf("%f",&n);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';
    }
    if (n==0){

        res=1;
        return(res);
    }

    for(c=n; c>0; c--) res= res*c;
    return(res);

}

double ArranjoSimples(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


float n=0, k=0;
int teste, c=0;
double resn=1, resnk=0, resnk2=1, res=0;
char ch, ponto;

    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t Arranjo Simples: A(n, k)\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tDigite um valor inteiro e positivo para n: ");
    scanf("%f",&n);
    do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

    teste = verificaSeEInteiro(n);

    while ((teste==0)||(ponto=='s')){
       setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t Arranjo Simples: A(n, k)\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tValor inv�lido, digite um valor inteiro, positivo e sem ponto para n: ");
    scanf("%f",&n);
    do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

    teste = verificaSeEInteiro(n);

    }

    while ((n<0)||(ponto=='s')){
        printf("\tValor inv�lido, digite um valor inteiro, positivo e sem ponto para n:");
        scanf("%f",&n);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';
    }

    printf("\tDigite um valor inteiro e positivo para k: ");
    scanf("%f",&k);
    do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

    teste = verificaSeEInteiro(k);


    while ((k<0)||(k>n)||(teste==0)||(ponto=='s')){
        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t Arranjo Simples: A(n, k)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\n\n\tObs.: Se o valor de k for igual ao valor de n escolher a op��o permuta��o para fazer o c�culo!!!");
        printf("\n\tValor inv�lido, digite um valor inteiro, positivo e menor que n e sem ponto para k:");
        scanf("%f",&k);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';
        teste = verificaSeEInteiro(k);
    }

    for(c=n; c>0; c--) resn=resn*c;

    resnk=n-k;

    for(c=resnk; c>0; c--) resnk2=resnk2*c;

    res=resn/resnk2;
    return(res);
}

double CombinacaoSimples(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores

float n=0, k=0;
int teste, c=0;
double resn=1, resk=1, resnk=0, res=0;
char ch, ponto;

    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t Combina��o Simples: C(n, k)\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tDigite um valor inteiro e positivo para n: ");
    scanf("%f",&n);
    do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

    teste = verificaSeEInteiro(n);

    while ((n<0)||(teste==0)||(ponto=='s')){
        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t Combina��o Simples: C(n, k)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tValor inv�lido, digite um valor inteiro, positivo e sem ponto para n:");
        scanf("%f",&n);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        teste = verificaSeEInteiro(n);

    }
    printf("\tDigite um valor inteiro e positivo para k: ");
    scanf("%f",&k);
    do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

    teste = verificaSeEInteiro(k);

    while ((k<0)||(k>n)||(teste==0)||(ponto=='s')){//Testa se � um n�mero maior que zero e inteiro

        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t Combina��o Simples: C(n, k)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tValor inv�lido, digite um valor inteiro, positivo, menor que n e sem ponto para K:");
        scanf("%f",&k);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        teste = verificaSeEInteiro(k);

    }

    resnk=n-k;

    for(c=n; c>resnk; c--) resn=resn*c; /*// fatora at� n ser maior que o valor de n-k, depois para*/

    for(c=k; c>0; c--) resk=resk*c;

    res=resn/resk;
    return(res);

}

double Arranjo_com_Repeticao(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


float n=0, k=0;
int teste;
double res=0;
char ch, ponto;

    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t Arranjo com Repeti��o: AR(n, k)\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tDigite um valor inteiro e positivo para n: ");
    scanf("%f",&n);
    do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

    teste = verificaSeEInteiro(n);

    while ((n<0)||(teste==0)||(ponto=='s')){
        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t Arranjo com Repeti��o: AR(n, k)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tValor inv�lido, digite um valor inteiro, positivo e sem ponto para n:");
        scanf("%f",&n);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        teste = verificaSeEInteiro(n);
    }

    printf("\tDigite um valor inteiro e positivo para k: ");
    scanf("%f",&k);
    do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

    teste = verificaSeEInteiro(k);

    while ((k<0)||(k>n)||(teste==0)||(ponto=='s')){
        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t Arranjo com Repeti��o: AR(n, k)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tValor inv�lido, digite um valor inteiro, positivo, menor que n e sem ponto para K:");
        scanf("%f",&k);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        teste = verificaSeEInteiro(k);

    }

    res= pow(n,k);
    return(res);

}

double Combinacao_com_Repeticao(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


int teste, c=0;
float n=0, k=0;
double resn=0, resn2=1, resk=1, resnk=0, resnk2=1, res=0;
char ch, ponto;

    setbuf(stdin, NULL);
    system("cls");
    SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
    printf("\n\n\t\t\t Combina��o com Repeti��o: CR(n, k)\n");
    printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\tDigite um valor inteiro e positivo para n: ");
    scanf("%f",&n);
    do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

    teste = verificaSeEInteiro(n);

    while ((n<0)||(teste==0)||(ponto=='s')){
        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t Combina��o com Repeti��o: CR(n, k)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tValor inv�lido, digite um valor inteiro, positivo e sem ponto para n:");
        scanf("%f",&n);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        teste = verificaSeEInteiro(n);
    }

    printf("\tDigite um valor inteiro para k: ");
    scanf("%f",&k);
    do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

    teste = verificaSeEInteiro(k);

    while ((k<0)||(teste==0)||(ponto=='s')){
        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t Combina��o com Repeti��o: CR(n, k)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tValor inv�lido, digite um valor inteiro, positivo, e sem ponto para K:");
        scanf("%f",&k);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            printf("%c", ch);
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        teste = verificaSeEInteiro(k);
    }

    resnk=(n+k-1);

        if (k<n){

            for (c=k; c>0; c--) resk=resk*(c);//resultado da fatora��o de k
            resn=n-1;//encontra o valor de n para simplificar
            for (c=resnk; c>resn; c--) resnk2= resnk2*(c);//resultado da fatora��o de (n+k-1)


            res= resnk2/resk;

            return(res);

}
            else{



                for (c=resnk; c>k; c--) resnk2= resnk2*(c);//resultado da fatora��o de (n+k-1)
                resn= n-1;
                for (c=resn; c>0; c--) resn2=resn2*(c);//resultado da fatora��o de n-1

                res= resnk2/resn2;

            return(res);

}

}

double Permutacao_com_Repeticao(){
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores



float n=0;
int c, teste;
double fat=1, res=1, res1=0;
char a='s', ch, ponto;

        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t\tPermuta��o com Repeti��o: P(1, K1, ... , Kp)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tDigite um valor inteiro e positivo para a quantidade de elemnetos(n): ");
        scanf("%f",&n);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        teste = verificaSeEInteiro(n);

        while ((n<0)||(teste==0)||(ponto=='s')){
        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\t\t\t\tPermuta��o com Repeti��o: P(1, K1, ... , Kp)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tValor inv�lido, digite um valor inteiro, positivo e sem ponto para n:");
        scanf("%f",&n);
        do {
            ch = fgetc(stdin);
            } while (ch =='.');

            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        teste = verificaSeEInteiro(n);

        }

        system("cls");

        for(c=n; c>0; c--)fat=fat*(c); //fatorial de n

        res=repeticaoK(n);// chama fun��o para fatorar k

        system("cls");
        res1= fat/res;

        return(res1);



}

float repeticaoK(float n){//repeti��o de k para realizar a permuta��o com repeti��o
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores


double resk=1, res=1;
int q=0, c=0, teste;
float k=0;
char a, ch, ponto;

    do{

        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\n\n\t\t\t\tPermuta��o com Repeti��o: P(1, K1, ... , Kp)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\tDigite um valor inteiro para k(%d): ",q);
        scanf("%f",&k);
         do {
            ch = fgetc(stdin);
            } while (ch =='.');
            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        teste = verificaSeEInteiro(k);

        while ((k<0)||(k>n)||(teste==0)||(ponto=='s')){
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\n\n\t\t\t\tPermuta��o com Repeti��o: P(1, K1, ... , Kp)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);


        printf("\tValor inv�lido, digite um valor inteiro, menor que N e positivo para K:");
        scanf("%f",&k);
         do {
            ch = fgetc(stdin);
            } while (ch =='.');

            if (ch!='\n') ponto= 's';
            else ponto = 'n';

        teste = verificaSeEInteiro(k);

        }

        resk=1;
        for(c=k; c>0; c--) resk=resk*(c); // fatorial para encontrar o valor de K
        res=res*resk;

        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\n\n\t\t\t\tPermuta��o com Repeti��o: P(1, K1, ... , Kp)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf ("\tDeseja adicionar um novo k? S(sim)/N(N�o): ");

        a = getchar();

        while((a!='S')&&(a!='s')&&(a!='N')&&(a!='n')){
        system("cls");
        setbuf(stdin, NULL);
        system("cls");
        SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
        printf("\n\n\n\n\t\t\t\tPermuta��o com Repeti��o: P(1, K1, ... , Kp)\n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf ("\tComando inv�lido digite (S) para adicionar um novo K ou (N) caso n�o queira: ");
          a = getchar();

        };

        setbuf(stdin, NULL);
        q++;

}   while ((a=='S') || (a=='s'));

        return(res);
}

int verificaSeE0ou1(int p){ // verifica se o n�mero digitado na l�gica proposicional � v�lido

    setbuf(stdin, NULL);
    while((p!=1)&&(p!=0)){
        system("cls");
        printf("\n\n\n\tValor inv�lido, digite 0 ou 1: ");
        scanf("%d", &p);
    };

    return (p);

}

float verificaSeEInteiro(float n){
int teste;

    teste = n;
    if (n==teste)return(1);
        else return(0);
}



int main(){
//ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);//usa fullscreen
SetConsoleTitle("\t\t CALCULADORA CONTEC ");//Coloca t�tulo na janela
setlocale(LC_ALL, "PORTUGUESE"); //seleciona o padr�o portugu�s, para poder colocar acentos...
HANDLE  hConsole;//habilita manipula��o de cores
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//habilita manipula��o de cores

int op,  subMenu=0, continuarPrograma=0, res=0, resp=0,  res1=0, res2=0 ;
float res11=0;
double res3=0;

system("cls"); // limpa caracteres da tela
 SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras

        printf("\n\n\n\n\n\n\n\t\t***************************************************************************\n");
        printf("\t\t**    -----     -----                 ----------     -------     -----   **\n");
        printf("\t\t**   |         |     |    | \\    |        |        |           |         **\n");
        printf("\t\t**   |         |     |    |  \\   |        |        |           |         **\n");
        printf("\t\t**   |         |     |    |   \\  |        |        |------     |         **\n");
        printf("\t\t**   |         |     |    |    \\ |        |        |           |         **\n");
        printf("\t\t**   |         |     |    |     \\|        |        |           |         **\n");
        printf("\t\t**    -----     -----                                -------     -----   **\n");
        printf("\t\t***************************************************************************\n\n\n\n");
        sleep(2);


     while(continuarPrograma!=1){  //estrutura de repeti��o para o program continuar at� o usu�rio escolher sair
        res=0;
        if (subMenu ==0){
        setbuf(stdin, NULL); // limpa buffer do teclado
        system("cls"); // limpa caracteres da tela

        SetConsoleTextAttribute(hConsole, 9);

        printf("\n\n\t\t\t\t\t\t Menu Principal \n");
        printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
        SetConsoleTextAttribute(hConsole, 7);
        printf("\t1. Somat�rio\n");
        printf("\t2. L�gica Proposicional\n");
        printf("\t3. An�lise Combinat�ria\n");
        printf("\t4. Sair\n\n");
        printf("\tDigite a op��o desejada: ");
        scanf("%d", &subMenu);
        }
        switch(subMenu){

        case 1:
            res=somatorio();// chama fun��o somat�rio
            break;

        case 2:
            res=logicaProposicional();// chama fun��o logica proposicional
            break;

        case 3:
            res=analiseCombinatoria();// chama fun��o an�lise combinat�ria
            break;

        case 4:
            continuarPrograma=1;// sai do programa
            break;


        default: // caso n�o tenha encontrado nenhuma vari�vl v�lida
            system("cls");
            printf("\n\n\n\t Valor inv�lido, escolher uma op��o entre 1 e 4.\n\n\n\n\t Pressione enter para voltar ao menu principal");
            subMenu = 0;
            getch(); //para a execu��o at� o usu�rio pressionar enter
        }


        if(subMenu==1 || subMenu==2 || subMenu==3 ){


        switch(res){

        case 11:
            res3=regraJ();
            printf("\n\tO resultado da somat�ria � = %.0lf\n",res3);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu somat�rio");
            getch();
            subMenu = 1;
            break;

        case 12:
            res3=regraJ2();
            printf("\n\tO resultado da somat�ria � = %.0lf\n", res3);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu somat�rio");
            getch();
            subMenu = 1;
            break;

        case 13:
            res11=aproximacaoPi();
            printf("\n\tO valor aproximado de pi �: %.20f\n\n\n\n", res11);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu somat�rio");
            getch();
            subMenu = 1;
            break;

        case 14:
            res11=aproximacaoNeperiano();
            printf("\n\tO valor da aproxima��o do n�mero neperiano �: %.20f\n\n\n", res11);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu somat�rio");
            getch();
            subMenu = 1;
            break;

        case 15:
            subMenu = 0;
            break;

        case 21:
            res1=notP();
            system("cls");
            SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
            printf("\n\n\t\t\t\t\t\t\t  ~P\n");
            printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
            SetConsoleTextAttribute(hConsole, 7);
                if (res1==1){
                    printf("\n\tO resultado de ~P �: %d (Verdadeiro)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                    }
                else{
                    printf("\n\tO resultado de ~P �: %d (Falso)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                    };
                    subMenu = 2;
            break;

        case 22:
            res1=notQ();
            system("cls");
            SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
            printf("\n\n\t\t\t\t\t\t\t  ~Q\n");
            printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
            SetConsoleTextAttribute(hConsole, 7);
                if (res1==1){
                    printf("\n\tO resultado de ~Q �: %d (Verdadeiro)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                    }
                else{
                    printf("\n\tO resultado de ~Q �: %d (Falso)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                    };
                subMenu = 2;
            break;

        case 23:
            res1=pEq();
            system("cls");
            SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
            printf("\n\n\t\t\t\t\t  P ^ Q\n");
            printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
            SetConsoleTextAttribute(hConsole, 7);
                if (res1==1){
                    printf("\n\tO resultado de P^Q �: %d (Verdadeiro)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                }
                else{
                    printf("\n\tO resultado de P^Q �: %d Falso)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                };
                subMenu = 2;
            break;

        case 24:
            res1=pOUq();
            system("cls");
            SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
            printf("\n\n\t\t\t\t\t  P V Q\n");
            printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
            SetConsoleTextAttribute(hConsole, 7);
                if (res1==1){
                    printf("\n\tO resultado de PvQ �: %d (Verdadeiro)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                }
                else{
                    printf("\n\tO resultado de PvQ �: %d (Falso)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                };
                subMenu = 2;
            break;

        case 25:
            res1=OUpOUq();
            system("cls");
            SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
            printf("\n\n\t\t\t\t\t  ou P ou Q\n");
            printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
            SetConsoleTextAttribute(hConsole, 7);
                if (res1==1){
                    printf("\n\tO resultado de ou P ou Q �: %d (Verdadeiro)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                }
                else{
                    printf("\n\tO resultado de ou P ou Q �: %d (Falso)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                };
                subMenu = 2;
            break;

        case 26:
            res1=sePentaoQ();
            system("cls");
            SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
            printf("\n\n\t\t\t\t\t  P -> Q\n");
            printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
            SetConsoleTextAttribute(hConsole, 7);
                if (res1==1){
                    printf("\n\tO resultado de P -> Q �: %d (Verdadeiro)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                }
                else{
                    printf("\n\tO resultado de P -> Q �: %d (Falso)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                };
                subMenu = 2;
            break;

        case 27:
            res1=P_e_se_somente_se_Q();
            system("cls");
            SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
            printf("\n\n\t\t\t\t\t  P <-> Q\n");
            printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
            SetConsoleTextAttribute(hConsole, 7);
                if (res1==1){
                    printf("\n\tO resultado de P <-> Q �: %d (Verdadeiro)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                }
                else{
                    printf("\n\tO resultado de P <-> Q �: %d (Falso)\n\n\n", res1);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu l�gica Proposicional");
                    getch();
                    };
                    subMenu = 2;
            break;

        case 28:
            subMenu = 0;
            break;

        case 31:
            res3=PermutacaoSimples();
            printf("\n\tO valor de P(n) �: %.0lf\n\n\n", res3);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu an�lise combinat�ria");
            getch();
            subMenu = 3;
            break;

        case 32:
            res3=ArranjoSimples();
            system("cls");
            SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
            printf("\n\n\t\t\t Combina��o Simples: C(n, k)\n");
            printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
            SetConsoleTextAttribute(hConsole, 7);
            printf("\n\tO resultado de A(n,k) �: %.0lf\n\n\n", res3);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu an�lise combinat�ria");
            getch();
            subMenu = 3;
            break;

        case 33:
            res3=CombinacaoSimples();
            printf("\n\tO resultado de C(n,k) �: %.0lf\n\n\n", res3);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu an�lise combinat�ria");
            getch();
            subMenu = 3;
            break;

        case 34:
            res3=Arranjo_com_Repeticao();
            printf("\n\tO resultado de AR(n,k) �: %.0lf\n\n\n", res3);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu an�lise combinat�ria");
            getch();
            subMenu = 3;
            break;

        case 35:
            res3=Combinacao_com_Repeticao();
            printf("\n\tO resultado de CR(n,k) �: %.0lf\n\n\n", res3);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu an�lise combinat�ria");
            getch();
            subMenu = 3;
            break;

        case 36:
            res3=Permutacao_com_Repeticao();
            system("cls");
            SetConsoleTextAttribute(hConsole, 9); // seleciona cor das letras
            printf("\n\n\t\t\t\tPermuta��o com Repeti��o: P(1, K1, ... , Kp)\n");
            printf("________________________________________________________________________________________________________________________\n\n\n\n\n");
            SetConsoleTextAttribute(hConsole, 7);
            printf("\n\tO resultado de PR(n,K1,...,Kn) �: %.0lf\n\n\n", res3);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\tPressione enter para voltar ao menu an�lise combinat�ria");
            getch();
            subMenu = 3;
            break;

        case 37:
            subMenu = 0;
            break;

        default:
            system("cls");
            printf("\n\n\n\n\t Valor inv�lido, \tpressione enter para voltar ao Menu Anterior");
            getch();

        }

        };
    };

}

