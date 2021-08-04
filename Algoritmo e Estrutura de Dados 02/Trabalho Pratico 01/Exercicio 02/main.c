#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Jogador
typedef struct Jogador
{
    int Id;
    int Altura;
    int Peso;
    int AnoNascimento;
    char Nome[50];
    char Universidade[50];
    char CidadeNascimento[50];
    char EstadoNascimento[50];
} Jogador; //typedef struct Jogador Jogador;
//Imprimir.
void Imprimir(Jogador* Atleta)
{
    printf("[%d ## %s ## %d ## %d ## %d ## %s ## %s ## %s]\n", Atleta->Id, Atleta->Nome, Atleta->Altura, Atleta->Peso, Atleta->AnoNascimento, Atleta->Universidade, Atleta->CidadeNascimento, Atleta->EstadoNascimento);
}
//Clone
Jogador *Clone(Jogador *Atleta[], int Contador)
{
    printf("%lu",sizeof(Atleta));
    Jogador *AClone = malloc(sizeof(Jogador));
    if(AClone==NULL)
    {
        printf("Erro ao criar clone");
        exit(1);
    }
    AClone->Id = (Atleta[0])->Id;
    strcpy(AClone->Nome,Atleta[Contador]->Nome);
    AClone->Altura = Atleta[Contador]->Altura;
    AClone->Peso = Atleta[Contador]->Peso;
    strcpy(AClone->Universidade,Atleta[Contador]->Universidade);
    AClone->AnoNascimento = Atleta[Contador]->AnoNascimento;
    strcpy(AClone->CidadeNascimento,Atleta[Contador]->CidadeNascimento);
    strcpy(AClone->EstadoNascimento,Atleta[Contador]->EstadoNascimento);
    return AClone;
}
//Abrir, Ler e Passar arquivo players
Jogador LeituraArquivo(Jogador *Atleta, int Contador)
{
    FILE *Arquivo;
    Arquivo = fopen("players.cvs","r");
    if(Arquivo == 0)
        printf("Erro de Leitura");
    char Linha[300];
    fscanf(Arquivo,"%[^\n]\n",Linha);
    printf("%s",Linha);
    for (int i=0; i<=3921; i++)
    {
        fscanf(Arquivo,"%[^\n]\n",Linha);
        char Tmp[250];
        int ContadorTmp = 0;
        int ContadorVirgula = 0;
        for(int i = 0; i < strlen(Linha); i++)
        {
            if(Linha[i] != ',')
            {
                Tmp[ContadorTmp] = Linha[i];
                ContadorTmp++;
            }
            else
            {
                Jogador *Jogador = malloc(sizeof(Jogador));
                if(Jogador==NULL)
                {
                    printf("Erro ao criar clone");
                    exit(1);
                }
                Atleta[Contador] = Jogador;
                switch(Contador)
                    case 0:
                        Atleta[Contador]->Id = Tmp;
                    case 1:
                        if ((strcmp(Tmp,"")))
                            Atleta[Contador]->Nome = Tmp;
                        else
                             Atleta[Contador]->Nome = strcpy(Atleta[Contador],"nao informado");
                    case 2:
                        Atleta[j]->Altura = Tmp;
                        /*
                Atleta[j].setpeso(Integer.parseInt(Tmp[3]));
                if (!Tmp[4].isEmpty())
                    Atleta[j].setuniversidade(Tmp[4]);
                else
                    Atleta[j].setuniversidade("nao informado");
                Atleta[j].setanoNascimento(Integer.parseInt(Tmp[5]));
                if (!Tmp[6].isEmpty())
                    Atleta[j].setcidadeNascimento(Tmp[6]);
                else
                    Atleta[j].setcidadeNascimento("nao informado");
                if (!Tmp[7].isEmpty())
                    Atleta[j].setestadoNascimento(Tmp[7]);
                else
                    Atleta[j].setestadoNascimento("nao informado");
                Contador++;

            }
        }

    }
    fclose(Arquivo);

    String [] Tmp = new String[8];
    int j=0,
    Posicao,
    Inicio,
    i=0,
    a=0;
    while (Linha != null && Id[a]!=null)
    {
        Linha = LinhaArquivo.readLine();
        if (Id[a].equals(Linha.substring(0,Linha.indexOf(","))))
        {
            Posicao=0;
            Inicio=0;
            for (i=0;i<8;i++)
            {
                if (i!=7)
                    Posicao=Linha.indexOf(",", Posicao+1);
                else
                    Posicao=Linha.length();
                Tmp[i] = Linha.substring(Inicio,Posicao);
                if (i!=7)
                    Inicio=Posicao+1;
            }
            Atleta[j].setid(Integer.parseInt(Tmp[0]));
            if (!Tmp[1].isEmpty())
                Atleta[j].setnome(Tmp[1]);
            else
                Atleta[j].setnome("nao informado");
            Atleta[j].setaltura(Integer.parseInt(Tmp[2]));
            Atleta[j].setpeso(Integer.parseInt(Tmp[3]));
            if (!Tmp[4].isEmpty())
                Atleta[j].setuniversidade(Tmp[4]);
            else
                Atleta[j].setuniversidade("nao informado");
            Atleta[j].setanoNascimento(Integer.parseInt(Tmp[5]));
            if (!Tmp[6].isEmpty())
                Atleta[j].setcidadeNascimento(Tmp[6]);
            else
                Atleta[j].setcidadeNascimento("nao informado");
            if (!Tmp[7].isEmpty())
                Atleta[j].setestadoNascimento(Tmp[7]);
            else
                Atleta[j].setestadoNascimento("nao informado");
            j++;
            a++;
        }
    }
    LinhaArquivo.close();
    Arquivo.close();
}
    return Atleta;
}
//Ordenacao do vetor por id de Entrada
public static void Ordenacao (String[] Recepcao, int Contador)
{
    String Tmp;
    int j;
    for (int i=1; i<Contador; i++)
    {
        Tmp = Recepcao[i];
        j=i-1;
        while ((j>=0) && (Integer.parseInt(Recepcao[j])>Integer.parseInt(Tmp)))
        {
            Recepcao[j+1] = Recepcao[j];
            j--;
        }
        Recepcao[j+1] = Tmp;
    }
}
*/

    //Main
int main ()
{
    Jogador Atleta [4000];
    int Contador = 0;
    LeituraArquivo(Atleta, Contador);
        /*String Recepcao;
        String [] Id = new String [4000];
        int i;
        int Contador = 0;
        int a = MyIO.readInt();
        do
        {
            Recepcao = MyIO.readLine();
            if (!Recepcao.contains("FIM"))
            {
                Id[Contador] = Recepcao;
                Contador++;
            }
        }
        while (!Recepcao.contains("FIM"));
        Ordenacao(Id,Contador);
        Jogador [] Atleta = LeituraArquivo(Id);
        int Esq = 0;
        int Dir = Contador;
        Quicksort(Atleta,Esq,Dir);
        Selecao(Atleta,Contador);
        for (i=0; i<10; i++)
        {
            Atleta[i].imprimir();
        } */
    }
